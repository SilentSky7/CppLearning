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

    // ���ֹ��췽��������ʹ��Exam���޲ι��죬Ȼ�������вι����½�һ�����󸳸�ex
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