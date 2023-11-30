
#include "Player.h"

sf::Clock   Player::clock;
float       Player::shotCoolDown = 0.f;
bool        Player::alive = true;
const float Player::PLAYER_SHOT_CD = 0.2;

Player::Player()
{
    setTexture(AssetManager::getSpriteSheet());
    setTextureRect(sf::IntRect(64,0,16,16));
    setPosition({VIEW_WIDTH /2.f - 1, VIEW_HEIGHT * 7.f/ 8.f});
    setOrigin(9, 0);

    deathAnimation.setTexture(AssetManager::getSpriteSheet());
    deathAnimation.setTextureRect(AssetManager::explodeFrames[1]);
    deathAnimation.setOrigin(9,0);
}

void Player::update() {
    shotCoolDown+= clock.restart().asSeconds();
}

void Player::resetCD() {
    shotCoolDown = 0.f;
}

bool Player::shotOffCD() {
    return shotCoolDown > PLAYER_SHOT_CD;
}

bool Player::isAlive() {
    return alive;
}

sf::Sprite &Player::getDeathAnimation() {
    return deathAnimation;
}

void Player::destroy() {
    alive = false;
    explodeFrame = 1;
    deathAnimation.setPosition(getPosition());
}

void Player::updateDeathAnimation() {
    deathAnimation.setTextureRect(AssetManager::explodeFrames[explodeFrame++]);
}

bool Player::animationComplete() {
    return explodeFrame > 3;
}

void Player::respawn() {
    alive = true;
}

