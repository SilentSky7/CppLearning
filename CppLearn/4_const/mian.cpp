#include <iostream>
using namespace std;

// const是一种承诺，保证变量不会被修改，利于代码的规范性和安全性

class Entity
{
private:
    int m_X = 1;
    mutable int DebugCount = 0; // mutable关键字让变量可以在const方法中改变，用于测试运行次数

public:
    int GetX() const
    {
        DebugCount++;
        return m_X;
    } // const的方法不可修改类的内容

    int GetX()
    {
        m_X = 3;
        return m_X;
    }

    int GetDebugCount() const { return DebugCount; }
};

void Print(const Entity &e) // 此处的const限定此引用的对象不可修改，所以只会调用const方法
{
    cout << e.GetX() << endl;
}

main()
{
    const int *p1 = new int; // 表示指针内容不可修改
    int *const p2 = new int; // 表示指针指向的数据不可修改

    const Entity e;
    Print(e);

    for (int i = 0; i < 9; i++)
    {
        e.GetX();
    }
    cout << e.GetDebugCount() << endl;
}