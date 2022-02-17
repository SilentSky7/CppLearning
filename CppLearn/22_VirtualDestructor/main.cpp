#include <iostream>

class Base
{
public:
    Base() { std::cout << "Base Constructor!" << std::endl; }
    // ���һ������Ҫ������չ����ôһ��Ҫ��������������Ϊ�麯��
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

    // ������ࣨbase������������û����Ϊvirtual����ô��ʹ�ö�̬ʱ�Ͳ�������������������������������ڴ�й¶��
    Base *poly = new Derived();
    delete poly;
}