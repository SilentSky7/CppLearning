#include <iostream>
#include "time.h"
using namespace std;

class Timer
{
private:
    clock_t start;

public:
    Timer()
    {
        start = clock();
    }

    ~Timer()
    {
        double dur = (double)(clock() - start);
        cout << "\nDuraction: " << dur << endl;
    }
};

class Entity
{
private:
    int a;

public:
    Entity(int x) : a(x)
    {
        cout << "Created Class With " << a << endl;
    }

    ~Entity()
    {
        cout << "Deleted Class!" << endl;
    }

    void TimerTest()
    {
        Timer t = Timer();
        double a = 100;
        for (int i = 1; i < 100000; i++)
        {
            a /= 1.1;
        }
        cout << a;
    }
};

class ScopedPtr // 智能指针
{
private:
    Entity *m_ptr;

public:
    ScopedPtr(Entity *ptr)
    {
        m_ptr = ptr;
    }

    ~ScopedPtr()
    {
        delete m_ptr;
    }
};

int main()
{
    {
        Entity *e = new Entity(1);
        cout << "================\n";
    };

    {
        ScopedPtr e = new Entity(2); // 使用隐式构造，因为ScopedPtr有一个构造函数需要Entity指针
        // 程序执行到此意味着作用域结束，会自动调用ScopedPtr的析构函数。以此实现了自动释放Entity对象的内存（堆中）。
    };

    cout << "================\n";
    Entity e(3);
    e.TimerTest(); // 例子：计时器（函数结束时自动调用析构函数）
}