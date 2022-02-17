#include <iostream>
#include <memory>
using namespace std;

class Entity
{
public:
    Entity()
    {
        cout << "Created Class!" << endl;
    }
    ~Entity()
    {
        cout << "Deleted Class!" << endl;
    }
};

int main()
{
    {
        cout << "unique_ptr result:\n";
        unique_ptr<Entity> entity = make_unique<Entity>();

        // unique_ptr不可复制、共享，在作用域结束时自动释放内存。
    }
    cout << "-------------------\n";
    {
        cout << "shared_ptr result:\n";
        shared_ptr<Entity> e0;
        {
            cout << "   -inside scope:" << endl;
            shared_ptr<Entity> entity = make_shared<Entity>();
            e0 = entity;
            // shared_ptr可复制，且当引用计数为0时释放内存。
        }
        cout << "   -outside scope:" << endl;
    }
}