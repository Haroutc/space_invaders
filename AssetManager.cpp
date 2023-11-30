

#include "AssetManager.h"

sf::Texture AssetManager::spriteSheet;
sf::Font AssetManager::font;
std::array<sf::IntRect, 3> AssetManager::explodeFrames{
        sf::IntRect(32,32,16,16),
        sf::IntRect(32,48,16,16),
        sf::IntRect(32,64,16,16)
};

void AssetManager::loadAssets() {
    spriteSheet.loadFromFile("assets/si_sheet.png");
    font.loadFromFile("assets/STENCIL.TTF");
}

sf::Texture const& AssetManager::getSpriteSheet() {
    return spriteSheet;
}

const sf::Font &AssetManager::getFont() {
    return font;
}
