#include <iostream>
#include <tuple>

// 结构化绑定：用于处理多返回值
// structured bindings only available with -std=c++17 or -std=gnu++17

std::tuple<std::string, int> GetPerson()
{
    return {"Kunyi", 21};
}

int main()
{
    auto [Name, Age] = GetPerson();
    std::cout << "Name: " << Name << "  Age: " << Age << std::endl;
}