

#ifndef FINAL_MEHDI_APPMANAGER_H
#define FINAL_MEHDI_APPMANAGER_H

#include <SFML/Graphics.hpp>
#include "Game.h"
#include <stack>
#include "MainMenu.h"


class AppManager {
    static std::stack<BaseState*> states;
    static sf::RenderWindow window;
public:
    static void Init();
    static void Run();
    static void addState(BaseState* state);
    static void popState();
};


#endif //FINAL_MEHDI_APPMANAGER_H
