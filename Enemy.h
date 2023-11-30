
#ifndef FINAL_MEHDI_ENEMY_H
#define FINAL_MEHDI_ENEMY_H

#include <SFML/Graphics.hpp>
#include <cstdlib>
#include "AssetManager.h"
#include "Definitions.h"

class Enemy : public sf::Sprite {
    static sf::Clock timer;
    static float elapsedTime;
    static float timeToShoot;
    static float animationTime;
    static const float ENEMY_ANIMATE_TIME;

    bool isDestroyed;
    int explodeFrame;

public:
    Enemy(EnemyType enemyType);
    static void update();
    static bool isOffCD();
    static bool timeToAnimate();
    static void resetAnimate();
    void updateAnimation();
    void destroy();
    bool explodeComplete();

};


#endif //FINAL_MEHDI_ENEMY_H
