#include <iostream>
using namespace std;

class Exam
{
public:
    Exam() { cout << "Class Created!" << endl; }
    Exam(int x) { cout << "Class Created With " << x << endl; }
};

class Entity
{
private:
    string name;
    Exam ex;

public:
    Entity() : name("Unknown"), ex(1) {}

    // 这种构造方法会首先使用Exam的无参构造，然后再用有参构造新建一个对象赋给ex
    Entity(const string &name) : name(name)
    {
        ex = Exam(100);
    }
};

int main()
{

    cout << "First method: " << endl;
    Entity e1;
    cout << "Second method: " << endl;
    Entity e2("kunyi");
}