

#include "LifeDisplay.h"
LifeDisplay::LifeDisplay()
{
    const int START_LIVES = 3;

    for(int i = 0; i < START_LIVES; i++)
        addLife();

}

void LifeDisplay::draw(sf::RenderTarget &target, sf::RenderStates states) const {
    for(int i = 0; i < lives.size(); i++)
        target.draw(lives[i]);
}

void LifeDisplay::addLife() {
    sf::Sprite life;
    life.setTexture(AssetManager::getSpriteSheet());
    life.setTextureRect(sf::IntRect(64,0,16,16));

    if(lives.empty())
        life.setPosition(5, VIEW_HEIGHT-20);
    else
        life.setPosition(lives.back().getPosition().x+ 16, lives.back().getPosition().y);

    lives.push_back(life);
}

void LifeDisplay::removeLife() {
    if(lives.empty()) return;

    lives.pop_back();
}

int LifeDisplay::numLives() {
    return lives.size();
}


