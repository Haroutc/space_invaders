
#include <cstdlib>
#include <ctime>
#include "AppManager.h"

int main()
{
    srand((unsigned) time(nullptr) );

    AssetManager::loadAssets();
    AppManager::Init();
    AppManager::Run();

    return 0;
}