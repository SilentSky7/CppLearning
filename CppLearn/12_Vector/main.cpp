#include <iostream>
#include <vector>
using namespace std;

struct Vertex
{
    int x, y, z;
};

ostream &operator<<(ostream &stream, const Vertex &v)
{
    cout << v.x << ", " << v.y << ", " << v.z << endl;
    return stream;
}

int main()
{
    vector<Vertex> vertices;
    vertices.push_back({1, 2, 3});
    vertices.push_back({4, 5, 6});
    vertices.push_back({7, 8, 9});
    for (Vertex &v : vertices)
        cout << v;

    vertices.erase(vertices.begin() + 1);
    for (Vertex &v : vertices)
        cout << v;
    vertices.clear();
    cin.get();
}
