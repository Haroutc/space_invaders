

#ifndef FINAL_MEHDI_ASSETMANAGER_H
#define FINAL_MEHDI_ASSETMANAGER_H


#include <SFML/Graphics.hpp>
#include <array>

class AssetManager {
    static sf::Texture spriteSheet;
    static sf::Font    font;
public:
    static void loadAssets();
    static const sf::Texture& getSpriteSheet();
    static const sf::Font& getFont();
    static std::array<sf::IntRect, 3> explodeFrames;

};


#endif //FINAL_MEHDI_ASSETMANAGER_H
