#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    std::vector<int> values = {1, 4, 5, 3, 2};
    auto x = std::find_if(values.begin(), values.end(), [](int value)
                          { return value > 3; });
    std::cout << *x << std::endl;
}