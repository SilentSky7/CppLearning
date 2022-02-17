#include <iostream>

// 类型双关：把一段内存当作不同类型的内存来看待

struct Entity
// Entity对象在内存中实际上是连续的两个int，共占用8个字节，所以可以当作int数组看待
{
    int x, y;
};

int main()
{
    Entity e = {3, 5};
    int *position = (int *)&e;
    std::cout << position[0] << ", " << position[1] << std::endl;
}