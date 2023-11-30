

#ifndef FINAL_MEHDI_TOPDISPLAY_H
#define FINAL_MEHDI_TOPDISPLAY_H

#include <SFML/Graphics.hpp>
#include "AssetManager.h"
#include "Definitions.h"


class TopDisplay : public sf::Drawable {

    sf::Text score;
    sf::Text wave;
    int scoreVal;
    int waveVal;

public:
    TopDisplay();
    void addToScore(int value);
    void nextWave();
    void draw(sf::RenderTarget& target, sf::RenderStates states) const;
};

#endif //FINAL_MEHDI_TOPDISPLAY_H
