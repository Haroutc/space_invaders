//
// Created by Haroutyun Chamelian on 4/22/22.
//

#include "AppManager.h"


std::stack<BaseState*> AppManager::states;
sf::RenderWindow       AppManager::window;

void AppManager::Init() {

    window.create(sf::VideoMode(WINDOW_WIDTH, WINDOW_HEIGHT), "Space Invaders");
    sf::View view({VIEW_WIDTH/2.f, VIEW_HEIGHT/2.f},{VIEW_WIDTH, VIEW_HEIGHT} );
    window.setView(view);
    addState(new MainMenu(window));
}

void AppManager::Run() {
    sf::Clock clock;
    float elapsedTime = 0.f;

    while (window.isOpen())
    {
        elapsedTime += clock.restart().asSeconds();

        while (elapsedTime >= TIME_STEP)
        {
            states.top()->HandleInput();
            states.top()->Update();

            elapsedTime -= TIME_STEP;
        }

        states.top()->Render();
    }
}

void AppManager::addState(BaseState *state) {
    states.push(state);
}

void AppManager::popState() {
    BaseState* deleting = states.top();
    states.pop();
    delete deleting;
}