#include <iostream>

class Entity
{
    virtual void PrintName() {}
};

class Player : public Entity
{
};

class Enemy : public Entity
{
};

int main()
{
    Entity *player = new Player();
    Entity *enemy = new Enemy();

    // dynamic_cast��ת��ʱ����������ͣ�������ת���򷵻�NULL���ɱ�����������ת��
    Player *p0 = dynamic_cast<Player *>(player);
    if (p0)
        std::cout << "p0 Casting Successfully!" << std::endl;
    Player *p1 = dynamic_cast<Player *>(enemy);
    if (p1)
        std::cout << "p1 Casting Successfully!" << std::endl;
}