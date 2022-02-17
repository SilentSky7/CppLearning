#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    std::vector<int> values = {1, 5, 8, 3, 2};
    std::sort(values.begin(), values.end(), [](int a, int b)
              { return a > b; }); // 如果为true，则a排在前面；为false，b排在前面。
    for (int value : values)
        std::cout << value << std::endl;
}