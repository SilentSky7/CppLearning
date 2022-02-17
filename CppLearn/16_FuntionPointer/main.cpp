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

void ForEach(const std::vector<int> &values, void (*fun)(int)) // 函数指针
{
    for (int value : values)
        fun(value);
}

int main()
{
    auto fun1 = Print1; // 此处的函数实际上做了隐式转换，类型为void(*fun1)(int)
    auto fun2 = &Print2;

    std::vector<int> values = {1, 2, 3, 4, 5};
    ForEach(values, fun1);
    std::cout << "------------" << std::endl;
    ForEach(values, fun2);
}