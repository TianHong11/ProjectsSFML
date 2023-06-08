//
// Created by tianh on 11/18/2022.
//

#ifndef SFML_PROJECT_POKERTEXTSCORE1_H
#define SFML_PROJECT_POKERTEXTSCORE1_H

#include <SFML/Graphics.hpp>
#include <iostream>
#include "Scores.h"
#include "DrawingCard.h"
#include "Card.h"
#include <vector>

class PokerTextScore1: public sf::Drawable
{
private:
    static sf::Font font;
    sf::Text textScore;

    std::vector<PokerTextScore1> theScore;
//    std::vector<std::string> score= {"ROYAL_FLUSH", "STRAIGHT_FLUSH", "FOUR_OF_A_KIND", "FULL_HOUSE", "FLUSH", "STRAIGHT",
//                             "THREE_OF_A_KIND", "TWO_PAIR", "ONE_PAIR", "HIGH_CARD"};
    std::vector<std::string> score= {"ROYAL FLUSH", "STRAIGHT FLUSH", "FOUR OF A KIND", "FULL HOUSE", "FLUSH", "STRAIGHT",
                                     "THREE OF A KIND", "TWO PAIR", "ONE PAIR", "HIGH CARD"};
    sf::Vector2f position;

public:
    void setPosition(sf::Vector2f position);

    PokerTextScore1();
    void setText();
    virtual void draw(sf::RenderTarget& window, sf::RenderStates states) const;
    void bottom(const PokerTextScore1 &obj1, PokerTextScore1 &obj2, float spacing) const;
    sf::FloatRect getGlobalBounds() const;


};


#endif //SFML_PROJECT_POKERTEXTSCORE1_H
