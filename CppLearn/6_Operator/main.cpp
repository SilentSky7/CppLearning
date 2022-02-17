#include <iostream>
using namespace std;

struct Vector
{
    float x, y;

    Vector(float _x, float _y) : x(_x), y(_y) {}

    Vector Add(Vector other) const
    {
        return Vector(x + other.x, y + other.y);
    }

    Vector operator+(Vector other) const // ����������
    {
        return Add(other);
    }

    bool operator==(Vector other) const // �൱��java�е�equal����
    {
        return x == other.x && y == other.y;
    }
};

int main()
{
    Vector v1(1.1, 2.3);
    Vector v2(2.5, 2.5);
    Vector result = v1 + v2;
    cout << result.x << ", " << result.y << endl;
    cout << "IsEqual? " << (v1 == v2);
}
