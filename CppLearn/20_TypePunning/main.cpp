#include <iostream>

// ����˫�أ���һ���ڴ浱����ͬ���͵��ڴ�������

struct Entity
// Entity�������ڴ���ʵ����������������int����ռ��8���ֽڣ����Կ��Ե���int���鿴��
{
    int x, y;
};

int main()
{
    Entity e = {3, 5};
    int *position = (int *)&e;
    std::cout << position[0] << ", " << position[1] << std::endl;
}