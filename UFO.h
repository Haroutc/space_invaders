

#ifndef FINAL_MEHDI_UFO_H
#define FINAL_MEHDI_UFO_H

#include <SFML/Graphics.hpp>
#include <cstdlib>
#include "AssetManager.h"
#include "Definitions.h"

class UFO : public sf::Sprite {
    static sf::Clock timer;
    static float accumulator;
    static float timeToSpawn;
    static const float minTimeBetween;
    static EnemyMove dir;

    bool alive;
    int destroyFrame;
public:
    UFO();

    bool isAlive();
    void destroy();
    bool updateDestroyed();

    static void resetTimer();
    static bool spawnTime();
    static void swapDirection();
    static EnemyMove getDirection();
};


#endif //FINAL_MEHDI_UFO_H
