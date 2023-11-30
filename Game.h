

#ifndef FINAL_MEHDI_GAME_H
#define FINAL_MEHDI_GAME_H

#include <SFML/Graphics.hpp>
#include <queue>
#include <list>

#include "BaseState.h"
#include "Definitions.h"
#include "Player.h"
#include "Enemy.h"
#include "Projectile.h"
#include "Barrier.h"
#include "Background.h"
#include "TopDisplay.h"
#include "LifeDisplay.h"
#include "UFO.h"
#include "Button.h"

class Game : public BaseState{
    sf::RenderWindow&       window;
    Player                  player;
    LifeDisplay             lifeDisplay;
    Background              background;
    std::vector<Enemy>      enemies;
    std::list<Enemy>        destroyed;
    std::list<UFO>          ufos;
    std::vector<Barrier>    barriers;
    std::vector<Projectile> projectiles;
    std::vector<Projectile> enemyProj;
    EnemyMove               movDir;
    EnemyMove               prevDir;
    TopDisplay              topDisplay;
    Button                  menuButton;
    sf::Text                gameOverText;
    bool                    gameOver;

public:
    Game(sf::RenderWindow& window);
    void HandleInput();
    void Update();
    void Render();

private:
    void initializeBarriers();
    void initializeEnemies();
    void initializeText();

    void shipFire();
    void enemyFire();

    void updateShipAnimations();
    void updatePlayerProjectiles();
    void updateEnemyProjectiles();
    void updateEnemyMovement();

    void updateUFO();

    void updateEndOfWave();

    void updateEndGameStatus();

    void updateMenuButton();
};


#endif //FINAL_MEHDI_GAME_H
