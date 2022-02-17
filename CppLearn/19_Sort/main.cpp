#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    std::vector<int> values = {1, 5, 8, 3, 2};
    std::sort(values.begin(), values.end(), [](int a, int b)
              { return a > b; }); // ���Ϊtrue����a����ǰ�棻Ϊfalse��b����ǰ�档
    for (int value : values)
        std::cout << value << std::endl;
}