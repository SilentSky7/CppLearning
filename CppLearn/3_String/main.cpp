#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;

void Funtion(string &str)
{
    str += "world";
}

int main()
{
    // string传值
    string str1 = "hello ";
    Funtion(str1);

    // 打印特殊格式
    const char *str2 = R"(line1
line2
line3)";

    cout << str2 << endl;
    cout << str1;

    // 字符串字面量的工作方式
    const char *name = "kunyi"; // 字符串实际为const char[]类型，保存于内存的只读区中。
    char n[] = "kunyi";         // 此过程实际上是将只读区的字符串拷贝到变量中
}