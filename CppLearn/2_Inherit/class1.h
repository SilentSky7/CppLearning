#include <iostream>
class Entity
{
public:
    std::string GetName() { return "Entity"; }
};
class Player : public Entity
{
    std::string name;

public:
    Player(std::string str) : name(str) {}
    std::string GetName() { return name; }
};