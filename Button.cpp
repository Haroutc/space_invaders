
#include "Button.h"
Button::Button() {
    text.setFont(AssetManager::getFont());
    text.setFillColor(sf::Color(154,217,65,255));
    text.setCharacterSize(24);


    border.setOutlineColor(sf::Color(154,217,65,255));
    border.setFillColor(sf::Color::Transparent);
    border.setOutlineThickness(2);
    border.setSize({80,40});
    border.setOrigin(border.getGlobalBounds().width/2, border.getGlobalBounds().height/2);
}

void Button::setText(std::string str) {
    text.setString(str);
    text.setOrigin(text.getGlobalBounds().width /2, text.getGlobalBounds().height);
}

void Button::setPosition(sf::Vector2f pos) {
    border.setPosition(pos);
    text.setPosition(pos);
}

sf::FloatRect Button::getBounds() {
    return border.getGlobalBounds();
}

void Button::draw(sf::RenderTarget &target, sf::RenderStates states) const {
    target.draw(border);
    target.draw(text);
}

void Button::highlight() {
    border.setFillColor(sf::Color(154,217,65,25));
}

void Button::lowlight() {
    border.setFillColor(sf::Color::Transparent);
}