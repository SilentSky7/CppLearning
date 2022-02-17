#include <iostream>

class Base
{
public:
    Base() { std::cout << "Base Constructor!" << std::endl; }
    // 如果一个类需要进行扩展，那么一定要把析构函数定义为虚函数
    virtual ~Base() { std::cout << "Base Destructor!" << std::endl; }
};

class Derived : public Base
{
private:
    int *data;

public:
    Derived()
    {
        data = new int[10];
        std::cout << "Derived Constructor!" << std::endl;
    }
    ~Derived()
    {
        delete[] data;
        std::cout << "Derived Destructor!" << std::endl;
    }
};

int main()
{
    Base *b = new Base();
    delete b;

    // 如果基类（base）的析构函数没有设为virtual，那么在使用多态时就不会调用派生类的析构函数，可能造成内存泄露。
    Base *poly = new Derived();
    delete poly;
}