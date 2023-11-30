

#ifndef FINAL_MEHDI_BUTTON_H
#define FINAL_MEHDI_BUTTON_H



#include <SFML/Graphics.hpp>
#include "AssetManager.h"


class Button : public sf::Drawable {
    sf::RectangleShape border;
    sf::Text           text;

public:
    Button();
    void setText(std::string str);
    void setPosition(sf::Vector2f pos);
    sf::FloatRect getBounds();
    void highlight();
    void lowlight();
    void draw(sf::RenderTarget& target, sf::RenderStates states) const;

};


#endif //FINAL_MEHDI_BUTTON_H
