

#include "TopDisplay.h"

TopDisplay::TopDisplay() : scoreVal(0), waveVal(1){
    wave.setFillColor(sf::Color(154,217,65,255));
    wave.setFont(AssetManager::getFont());
    wave.setString("WAVE: "+ std::to_string(waveVal));
    wave.setPosition(VIEW_WIDTH - wave.getGlobalBounds().width, 0);
    wave.setCharacterSize(17);


    score.setFillColor(sf::Color(154,217,65,255));
    score.setFont(AssetManager::getFont());
    score.setCharacterSize(17);
    score.setString("SCORE: "+std::to_string(scoreVal));

}

void TopDisplay::draw(sf::RenderTarget &target, sf::RenderStates states) const{
    target.draw(wave);
    target.draw(score);
}

void TopDisplay::addToScore(int value) {
    scoreVal += value;
    score.setString("SCORE: "+std::to_string(scoreVal));
}

void TopDisplay::nextWave() {
    wave.setString("WAVE: "+ std::to_string(++waveVal));
}