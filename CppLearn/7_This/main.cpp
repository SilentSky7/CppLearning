#include <iostream>
using namespace std;

class Entity;
void PrintEntity(const Entity &e);

class Entity
{
public:
    int a;
    int b;

    Entity(int a, int b)
    {
        Entity &e = *this;
        this->a = a;
        e.b = b;
        PrintEntity(*this);
    }
};

void PrintEntity(const Entity &e)
{
    cout << e.a << ", " << e.b << endl;
}

int main()
{
    Entity e(100, 50);
}