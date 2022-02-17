#include <iostream>
#include <vector>
using namespace std;

struct Vertex
{
    int x, y, z;

    Vertex(int x, int y, int z) : x(x), y(y), z(z) {}

    Vertex(const Vertex &v)
    {
        cout << "Copied!" << endl;
    }
};

int main()
{
    vector<Vertex> vertices1;
    vertices1.push_back(Vertex(1, 2, 3)); // ����һ��
    vertices1.push_back(Vertex(4, 5, 6)); // ��������
    vertices1.push_back(Vertex(7, 8, 9)); // ��������

    cout << "-------- Optimize One -----\n";

    vector<Vertex> vertices2;
    vertices2.reserve(3);
    vertices2.push_back(Vertex(1, 2, 3));
    vertices2.push_back(Vertex(4, 5, 6));
    vertices2.push_back(Vertex(7, 8, 9));

    cout << "-------- Optimize Two -----\n";

    vector<Vertex> vertices3;
    vertices3.reserve(3);
    vertices3.emplace_back(1, 2, 3); // ֱ�Ӵ��ݹ��캯���Ĳ����б���������main�д���������copy��vector��
    vertices3.emplace_back(4, 5, 6);
    vertices3.emplace_back(7, 8, 9);

    cin.get();
}