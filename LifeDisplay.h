
#ifndef FINAL_MEHDI_LIFEDISPLAY_H
#define FINAL_MEHDI_LIFEDISPLAY_H

#include <SFML/Graphics.hpp>
#include "Player.h"

class LifeDisplay : public sf::Drawable{
    std::vector<sf::Sprite> lives;

public:
    LifeDisplay();
    void removeLife();
    void addLife();
    int numLives();
    void draw(sf::RenderTarget& target, sf::RenderStates states) const;
};


#endif //FINAL_MEHDI_LIFEDISPLAY_H
