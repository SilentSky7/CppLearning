#include <iostream>
using namespace std;

// const��һ�ֳ�ŵ����֤�������ᱻ�޸ģ����ڴ���Ĺ淶�ԺͰ�ȫ��

class Entity
{
private:
    int m_X = 1;
    mutable int DebugCount = 0; // mutable�ؼ����ñ���������const�����иı䣬���ڲ������д���

public:
    int GetX() const
    {
        DebugCount++;
        return m_X;
    } // const�ķ��������޸��������

    int GetX()
    {
        m_X = 3;
        return m_X;
    }

    int GetDebugCount() const { return DebugCount; }
};

void Print(const Entity &e) // �˴���const�޶������õĶ��󲻿��޸ģ�����ֻ�����const����
{
    cout << e.GetX() << endl;
}

main()
{
    const int *p1 = new int; // ��ʾָ�����ݲ����޸�
    int *const p2 = new int; // ��ʾָ��ָ������ݲ����޸�

    const Entity e;
    Print(e);

    for (int i = 0; i < 9; i++)
    {
        e.GetX();
    }
    cout << e.GetDebugCount() << endl;
}