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
    string &strRef = ModifyString(str); // �˴�ʹ�����ã�����Ҫ���������ص�string���и��ơ�
    cout << str << endl;
    cout << strRef << endl;
}