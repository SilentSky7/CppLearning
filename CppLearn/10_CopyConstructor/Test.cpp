#include <iostream>
using namespace std;

string &ModifyString(string str)
{
    string &strRef = str;
    strRef[0] = 'B';
    return strRef;
}

int main()
{
    string str = "A-Grade";
    string &strRef = ModifyString(str); // 此处使用引用，不需要将函数返回的string进行复制。
    cout << str << endl;
    cout << strRef << endl;
}