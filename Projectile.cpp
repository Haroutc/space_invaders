

#include "Projectile.h"

Projectile::Projectile() {
    setTexture(AssetManager::getSpriteSheet());
    setTextureRect(sf::IntRect(39,5,1,5));
}