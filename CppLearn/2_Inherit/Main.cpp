#include <iostream>
using namespace std;

// #include "class1.h"
#include "class2.h" // class1.h中的类继承没有实现多态，无法覆盖方法

void Funtion(Entity &entity)
{
    cout << entity.GetName() << endl;
}

int main()
{
    Entity et1;
    Funtion(et1);

    Player et2("Kunyi");
    Funtion(et2);

    cout << "---------------------\n";
    PrintClass(&et1);
    PrintClass(&et2);
}