#include "Log.h"

void StaticFuntion()
{
    static int x = 0; // static����������ʱ��Ϊ���ã���x��һֱ����
    x++;
    cout << x << endl;
}

int main()
{
    Log log;
    log.SetLevel(Log::LevelWarning);
    log.Error("hello");
    log.Warning("hello");
    log.Info("hello");

    // Entity et; // ���ڹ��췽��Ϊprivate�����޷���Entityʵ����
    Entity::write();

    StaticFuntion();
    StaticFuntion();
    StaticFuntion();
    StaticFuntion();
}