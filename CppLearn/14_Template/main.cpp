#include <iostream>

template <typename T> // 也可以用<class T>
void Print(T value)
{
    std::cout << value << std::endl;
}

template <typename T, int N>
class Array
{
private:
    T m_array[N];

public:
    int GetSize() const { return N; }
};

int main()
{
    Print(5);
    Print<std::string>("hello");

    Array<std::string, 10> a;
    std::cout << a.GetSize() << std::endl;
}