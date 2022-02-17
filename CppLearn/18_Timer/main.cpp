#include <iostream>
#include <chrono>
#include <thread>

struct Timer
{
    std::chrono::time_point<std::chrono::steady_clock> start, end;

    Timer()
    {
        start = std::chrono::steady_clock::now();
    }

    ~Timer()
    {
        end = std::chrono::steady_clock::now();
        std::chrono::duration<float> duration = end - start;
        float ms = duration.count() * 1000.0f;
        std::cout << "Timer: " << ms << "ms" << std::endl;
    }
};

void Funtion()
{
    Timer timer;
    for (int i = 0; i < 100; i++)
    {
        std::cout << "Hello World!" << std::endl;
    }
}

int main()
{
    Funtion();
}