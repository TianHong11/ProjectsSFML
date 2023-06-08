//
// Created by tianh on 11/18/2022.
//

//#include "PokerTextScore1.h"
//
//sf::Font PokerTextScore1::font;
//
//PokerTextScore1::PokerTextScore1() {
//    setText();
//}
//
//void PokerTextScore1::setText() {
//
//
//    if(!font.loadFromFile("16020_FUTURAM.ttf") ){
//        std::cout<<"Error text score"<< std::endl;
//    }
//    for(int i=0;i<score.size();i++) {
//        textScore.setString(score[i]);
//        textScore.setPosition(500, 100*i);
//        textScore.setCharacterSize(30);
//        textScore.setFont(font);
//        textScore.setStyle(sf::Text::Bold);
//
//    }
//}
//void PokerTextScore1::bottom(const PokerTextScore1 &obj1, PokerTextScore1 &obj2, float spacing) const
//{
//    sf::FloatRect o1= obj1.getGlobalBounds();
//    sf::FloatRect o2= obj2.getGlobalBounds();
//    obj2.setPosition({o1.left,o1.top+o1.height});
//
//}
//void PokerTextScore1::setPosition(sf::Vector2f position)
//{
//    this->position=position;
//}
//
//sf::FloatRect PokerTextScore1::getGlobalBounds() const
//{
//    return textScore.getGlobalBounds();
//}
//
//void PokerTextScore1::draw(sf::RenderTarget& window, sf::RenderStates states) const
//{
//    window.draw(score[0]);
//    for(int i=1;i<score.size();i++)
//    {
//        bottom(score[i-1],score[1],10);
//        textScore.setString(score[i]);
//        window.draw(textScore);
//    }
//
//
//}
