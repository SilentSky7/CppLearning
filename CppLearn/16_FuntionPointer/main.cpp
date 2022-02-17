#include <iostream>
#include <vector>

void Print1(int value)
{
    std::cout << "value: " << value << std::endl;
}

void Print2(int value)
{
    std::cout << "Hello: " << value << std::endl;
}

void ForEach(const std::vector<int> &values, void (*fun)(int)) // ����ָ��
{
    for (int value : values)
        fun(value);
}

int main()
{
    auto fun1 = Print1; // �˴��ĺ���ʵ����������ʽת��������Ϊvoid(*fun1)(int)
    auto fun2 = &Print2;

    std::vector<int> values = {1, 2, 3, 4, 5};
    ForEach(values, fun1);
    std::cout << "------------" << std::endl;
    ForEach(values, fun2);
}