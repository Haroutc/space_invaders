
#ifndef FINAL_MEHDI_PLAYER_H
#define FINAL_MEHDI_PLAYER_H

#include <SFML/Graphics.hpp>
#include "AssetManager.h"
#include "Definitions.h"

class Player : public sf::Sprite{

    sf::Sprite          deathAnimation;
    int                 explodeFrame;

    static sf::Clock    clock;
    static float        shotCoolDown;
    static bool         alive;
    static const float  PLAYER_SHOT_CD;
public:
    Player();
    static void update();
    static void resetCD();
    static bool shotOffCD();
    static bool isAlive();

    void destroy();
    void respawn();
    sf::Sprite& getDeathAnimation();
    void updateDeathAnimation();
    bool animationComplete();
};


#endif //FINAL_MEHDI_PLAYER_H
