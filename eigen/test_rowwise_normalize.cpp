#include <iostream>
#include <Eigen/Dense>
 
using namespace Eigen;
using namespace std;
 
int main()
{
	Matrix3d m = Matrix3d::Random();
	cout << "Here is the matrix m:" << endl << m << endl;
	cout << "Here is the norm of each row:" << endl << m.rowwise().norm() << endl;
	m.rowwise().normalize();
	cout << "Here is the matrix after rowwise normalization:" << endl << m<< endl;
}

