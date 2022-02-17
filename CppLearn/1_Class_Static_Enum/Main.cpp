#include "Log.h"

void StaticFuntion()
{
    static int x = 0; // static变量的生存时间为永久，故x会一直叠加
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

    // Entity et; // 由于构造方法为private，故无法对Entity实例化
    Entity::write();

    StaticFuntion();
    StaticFuntion();
    StaticFuntion();
    StaticFuntion();
}