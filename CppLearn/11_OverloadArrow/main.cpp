#include <iostream>
using namespace std;

class Entity
{
public:
    void Print() { cout << "Hello"; }
};

template <typename T>
class ScopedPtr
{
private:
    T *entity;

public:
    ScopedPtr(T *e) : entity(e) {}
    ~ScopedPtr() { delete entity; }

    T *operator->()
    {
        return entity;
    }
};

int main()
{
    ScopedPtr<Entity> ptr = new Entity();
    ptr->Print(); // 简化代码，使得智能指针的使用更易于理解。
}