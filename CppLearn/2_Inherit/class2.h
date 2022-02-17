#include <iostream>

class Printable
{
public:
    virtual std::string GetClassName() = 0; // ���麯��(Interface)
};

class Entity : public Printable
{
public:
    virtual std::string GetName() { return "Entity"; } // ����Ϊ�麯����(virtual funtion)
    // �麯����Ϊ�������û����ָ����������������������
    // ʵ�ֶ�̬��Ҫ��ά��һ�����С�̶���Ӱ�������ܡ�

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