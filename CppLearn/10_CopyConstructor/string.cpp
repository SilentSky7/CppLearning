#include <iostream>
#include <cstring>
using namespace std;

class String
{
private:
    char *m_Buffer;
    unsigned int m_size;

public:
    String(const char *string)
    {
        m_size = strlen(string);
        m_Buffer = new char[m_size + 1];
        memcpy(m_Buffer, string, m_size + 1);
    }

    // 默认的拷贝构造函数，会将成员变量进行复制，称之为浅拷贝
    // String(const String &other) = delete;  禁用拷贝构造函数，对象不再允许被复制
    String(const String &other) : m_size(other.m_size)
    {
        cout << "Copied String!\n";
        m_Buffer = new char[m_size + 1];
        memcpy(m_Buffer, other.m_Buffer, m_size + 1);
    }

    ~String()
    {
        delete[] m_Buffer;
    }

    const char *GetBuffer() const
    {
        return m_Buffer;
    }

    char &operator[](unsigned int index) // 重载[]，使得可以通过下标修改字符串。
    {
        return m_Buffer[index];
    }
};

ostream &operator<<(ostream &stream, const String &string) // 重载输出
{
    cout << string.GetBuffer();
    return stream;
}

void PrintString(const String &str) // 传参时尽量使用const引用的形式，可以避免不必要的对象拷贝
{
    cout << str << endl;
}

int main()
{
    String str1 = "Meyon";
    String str2 = str1;
    str2[0] = 'K';
    PrintString(str1);
    PrintString(str2);
}