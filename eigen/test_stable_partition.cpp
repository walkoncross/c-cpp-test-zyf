#include <iostream>
#include <algorithm>
#include <vector>
#include <Eigen/Dense>
 
using namespace std;
using Eigen::MatrixXd;
 
int main()
{
  MatrixXd m = MatrixXd::Random(10,1);

  // vector<int> v{0, 0, 3, 0, 2, 4, 5, 0, 7};
  // stable_partition(v.begin(), v.end(), [](int n){return n>0;});

  m.array() -= m.mean();
  cout << "m = " << m << endl;

  stable_partition(m.data(), m.data()+m.size(), [ ](double n){return n>0;} );
  //  [](double i)->bool{return i>=0;}
  cout << "m = " << m << endl;
}
