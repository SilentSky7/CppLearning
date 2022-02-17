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

class ScopedPtr // ����ָ��
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
        ScopedPtr e = new Entity(2); // ʹ����ʽ���죬��ΪScopedPtr��һ�����캯����ҪEntityָ��
        // ����ִ�е�����ζ����������������Զ�����ScopedPtr�������������Դ�ʵ�����Զ��ͷ�Entity������ڴ棨���У���
    };

    cout << "================\n";
    Entity e(3);
    e.TimerTest(); // ���ӣ���ʱ������������ʱ�Զ���������������
}