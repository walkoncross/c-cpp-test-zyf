#include <iostream>

using namespace std;

int main()
{
    // 定义简单的lambda表达式
    auto basicLambda = [] { cout << "Hello, world!" << endl; };
    // 调用
    basicLambda();   // 输出：Hello, world!
    
    // 指明返回类型
    auto add = [](int a, int b) -> int { return a + b; };
    // 自动推断返回类型
    auto multiply = [](int a, int b) { return a * b; };
    
    int sum = add(2, 5);   // 输出：7
    int product = multiply(2, 5);  // 输出：10

    cout << sum << " " << product << endl;

    int x = 10;
    
    auto add_x = [x](int a) { return a + x; };  // 复制捕捉x
    auto multiply_x = [&x](int a) { return a * x; };  // 引用捕捉x
    
    cout << add_x(10) << " " << multiply_x(10) << endl;
    // 输出：20 100
    return 0;
}
