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

        // unique_ptr���ɸ��ơ����������������ʱ�Զ��ͷ��ڴ档
    }
    cout << "-------------------\n";
    {
        cout << "shared_ptr result:\n";
        shared_ptr<Entity> e0;
        {
            cout << "   -inside scope:" << endl;
            shared_ptr<Entity> entity = make_shared<Entity>();
            e0 = entity;
            // shared_ptr�ɸ��ƣ��ҵ����ü���Ϊ0ʱ�ͷ��ڴ档
        }
        cout << "   -outside scope:" << endl;
    }
}