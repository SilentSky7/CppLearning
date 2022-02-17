#include <iostream>

struct Vector3
{
    int x, y, z;
    Vector3(int x, int y, int z) : x(x), y(y), z(z)
    {
    }
};

int main()
{
    int a[3] = {1, 2, 3};
    Vector3 *vector = (Vector3 *)a;
    std::cout << vector->x << ", " << vector->y << ", " << vector->z << std::endl;
}