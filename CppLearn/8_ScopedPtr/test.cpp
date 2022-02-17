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
        /*         double dur = (double)(clock() - start);
        cout << "Duraction: " << dur << endl; */
        cout << "deleted" << endl;
    }
};

class Entity
{
private:
    int a;

public:
    Entity()
    {
        a = 100;
    }
    ~Entity()
    {
        cout << "deleted";
    }
};

void TimerTest()
{
    Timer t = Timer();
}

int main()
{
    TimerTest();
    Entity e();
}