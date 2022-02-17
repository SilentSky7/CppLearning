#include <iostream>

struct Vector2
{
    int x, y;
};

struct Vector4
{
    // 联合体：用于多种方法来处理相同的数据。
    // union的大小由最大的成员的大小决定
    union // union中的各元素共享同一段内存空间，但类型不同，访问方式不同
    {
        struct
        {
            int x, y, z, w;
        };
        struct
        {
            Vector2 a, b, c;
        };
    };
};

void PrintVector2(const Vector2 &v)
{
    std::cout << v.x << ", " << v.y << std::endl;
}

int main()
{
    Vector4 vector = {1, 2, 3, 4};
    vector.x = 5;
    vector.c.x = 100;
    PrintVector2(vector.a);
    PrintVector2(vector.b);
    PrintVector2(vector.c);
}