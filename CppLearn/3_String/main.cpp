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
    // string��ֵ
    string str1 = "hello ";
    Funtion(str1);

    // ��ӡ�����ʽ
    const char *str2 = R"(line1
line2
line3)";

    cout << str2 << endl;
    cout << str1;

    // �ַ����������Ĺ�����ʽ
    const char *name = "kunyi"; // �ַ���ʵ��Ϊconst char[]���ͣ��������ڴ��ֻ�����С�
    char n[] = "kunyi";         // �˹���ʵ�����ǽ�ֻ�������ַ���������������
}