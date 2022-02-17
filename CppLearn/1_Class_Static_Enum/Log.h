#include <iostream>
using namespace std;

class Log
{
public:
    enum Level
    {
        LevelError,
        LevelWarning,
        LevelInfo
    };

private:
    Level m_LogLevel = LevelInfo;

public:
    void SetLevel(Level level)
    {
        m_LogLevel = level;
    }
    void Error(const char *message)
    {
        if (m_LogLevel >= LevelError)
            cout << "[ERROR]: " << message << endl;
    }
    void Warning(const char *message)
    {
        if (m_LogLevel >= LevelWarning)
            cout << "[Warning]: " << message << endl;
    }
    void Info(const char *message)
    {
        if (m_LogLevel >= LevelInfo)
            cout << "[Info]: " << message << endl;
    }
};

class Entity
{
private:
public:
    Entity() = delete; // ɾ��Constructor����ʹ�����޷���ʵ����

    // ��һ��д���� �����캯������private������

    static void write()
    {
        cout << "Write" << endl;
    }
};
