
#include "Enemy.h"

sf::Clock Enemy::timer;
float Enemy::elapsedTime = 0;
float Enemy::timeToShoot = 1.0f;
float Enemy::animationTime = 0.f;
const float Enemy::ENEMY_ANIMATE_TIME = 0.5f;

Enemy::Enemy(EnemyType enemyType)
        : isDestroyed(false), explodeFrame(1)
{
    setTexture(AssetManager::getSpriteSheet());

    switch(enemyType)
    {
        case EnemyType::ONE:
            setTextureRect(sf::IntRect(0,0,16,16));
            break;
        case EnemyType::TWO:
            setTextureRect(sf::IntRect(0,16,16,16));
            break;
        case EnemyType::THREE:
            setTextureRect(sf::IntRect(0,32,16,16));
            break;
        case EnemyType::FOUR:
            setTextureRect(sf::IntRect(0,48,16,16));
            break;
    }
}
void Enemy::update() {
    animationTime += timer.getElapsedTime().asSeconds();
    elapsedTime   += timer.restart().asSeconds();
}

bool Enemy::isOffCD() {

    if(elapsedTime > timeToShoot)
    {
        elapsedTime = 0.f;
        timeToShoot = rand() % 1300;
        timeToShoot = timeToShoot / 1000.f + .3f;
        return true;
    }

    return false;
}

bool Enemy::timeToAnimate() {

    return animationTime > ENEMY_ANIMATE_TIME;
}

void Enemy::resetAnimate() {
    animationTime -= ENEMY_ANIMATE_TIME;
}

void Enemy::updateAnimation() {
    if(isDestroyed)
    {
        setTextureRect(AssetManager::explodeFrames[explodeFrame++]);
    }
    else
    {
        sf::IntRect currentRect = getTextureRect();
        currentRect.left = (currentRect.left + 16) % 32;
        setTextureRect(currentRect);
    }
}

void Enemy::destroy() {
    isDestroyed = true;
}

bool Enemy::explodeComplete() {
    return explodeFrame > 3;
}