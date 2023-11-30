

#ifndef FINAL_MEHDI_MAINMENU_H
#define FINAL_MEHDI_MAINMENU_H

#include "BaseState.h"
#include "Background.h"
#include "Button.h"
#include "Game.h"
#include <SFML/Graphics.hpp>

class MainMenu : public BaseState{
    sf::RenderWindow&   window;
    Background          background;
    Button              playButton;
    Button              exitButton;

public:
    MainMenu(sf::RenderWindow& window);
    void HandleInput();
    void Update();
    void Render();

};


#endif //FINAL_MEHDI_MAINMENU_H
