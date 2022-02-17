#include <iostream>

struct Vector2
{
    int x, y;
};

struct Vector4
{
    // �����壺���ڶ��ַ�����������ͬ�����ݡ�
    // union�Ĵ�С�����ĳ�Ա�Ĵ�С����
    union // union�еĸ�Ԫ�ع���ͬһ���ڴ�ռ䣬�����Ͳ�ͬ�����ʷ�ʽ��ͬ
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