#include <iostream>

class Printable
{
public:
    virtual std::string GetClassName() = 0; // 纯虚函数(Interface)
};

class Entity : public Printable
{
public:
    virtual std::string GetName() { return "Entity"; } // 定义为虚函数。(virtual funtion)
    // 虚函数：为了允许用基类的指针来调用子类的这个函数。
    // 实现多态需要再维护一个虚表，小程度上影响了性能。

    std::string GetClassName() { return "Entity"; };
};

class Player : public Entity
{
    std::string name;

public:
    Player(std::string str)
        : name(str) {}

    std::string GetName() override { return name; }

    std::string GetClassName() { return "Player"; };
};

void PrintClass(Entity *obj)
{
    cout << "Class Name: " << obj->GetClassName() << endl;
}