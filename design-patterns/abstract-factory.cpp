#include <iostream>
using namespace std;

class AbstractProductA {
public:
    virtual ~AbstractProductA(){}
    virtual void Operation() = 0;
};

class ProductA1 : public AbstractProductA {
public:
    void Operation() {
        cout << "ProductA1" << endl;
    }
};

class ProductA2 : public AbstractProductA {
public:
    void Operation() {
        cout << "ProductA2" << endl;
    }
};

class AbstractProductB {
public:
    virtual ~AbstractProductB(){}
    virtual void Operation() = 0;
};

class ProductB1 : public AbstractProductB {
public:
    void Operation() {
        cout << "ProductB1" << endl;
    }
};

class ProductB2 : public AbstractProductB {
public:
    void Operation() {
        cout << "ProductB2" << endl;
    }
};


class AbstractFactory {
public:
    virtual AbstractProductA* CreateProductA() = 0;
    virtual AbstractProductB* CreateProductB() = 0;
    virtual ~AbstractFactory(){}
};

class ConcreteFactory1 : public AbstractFactory {
public:
    ProductA1* CreateProductA() {
        return new ProductA1();
    }
    ProductB1* CreateProductB() {
        return new ProductB1();
    }
};

class ConcreteFactory2 : public AbstractFactory {
public:
    ProductA2* CreateProductA() {
        return new ProductA2();
    }
    ProductB2* CreateProductB() {
        return new ProductB2();
    }
};

int main() {
    AbstractFactory* af1 = new ConcreteFactory1();
    // 具体工厂创建对应的具体产品
    AbstractProductA* apa1 = af1->CreateProductA();  // 工厂1创建产品A
    apa1->Operation();  // ProductA1

    AbstractProductB* apb1 = af1->CreateProductB();  // 工厂1创建产品B
    apb1->Operation();  // ProductB1

    AbstractFactory* af2 = new ConcreteFactory2();
    AbstractProductA* apa2 = af2->CreateProductA();  // 工厂2创建产品A
    apa2->Operation();  // ProductA2

    AbstractProductB* apb2 = af2->CreateProductB();  // 工厂2创建产品B
    apb2->Operation();  // ProductB2

    delete apa1;
    delete apa2;
    delete af1;
    delete apb1;
    delete apb2;
    delete af2;
    return 0;
}
