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

    // Ĭ�ϵĿ������캯�����Ὣ��Ա�������и��ƣ���֮Ϊǳ����
    // String(const String &other) = delete;  ���ÿ������캯������������������
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

    char &operator[](unsigned int index) // ����[]��ʹ�ÿ���ͨ���±��޸��ַ�����
    {
        return m_Buffer[index];
    }
};

ostream &operator<<(ostream &stream, const String &string) // �������
{
    cout << string.GetBuffer();
    return stream;
}

void PrintString(const String &str) // ����ʱ����ʹ��const���õ���ʽ�����Ա��ⲻ��Ҫ�Ķ��󿽱�
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