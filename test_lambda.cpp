// refer to: https://www.jianshu.com/p/d686ad9de817
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
    
    cout << "x=" << x << endl;
    cout << "add_x(10)=" << add_x(10) << endl; // 输出：100
    cout << "x=" << x << endl;
    cout << "multiply_x(10)=" << multiply_x(10) << endl;// 输出：20
    cout << "x=" << x << endl;

    auto add_x2 = [x](int a) mutable { x *= 2; return a + x; };  // 复制捕捉x

    //cout << "x=" << x << endl;
    cout << "add_x2(10)=" << add_x2(10) << endl; // 输出 30
    cout << "x=" << x << endl;

    auto add_x3 = [&x](int a) mutable { x *= 2; return a + x; };  // 引用捕捉x

    //cout << "x=" << x << endl;
    cout << "add_x3(10)=" << add_x3(10) << endl; // 输出 30
    cout << "x=" << x << endl;

    return 0;
}
