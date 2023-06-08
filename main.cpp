#include <iostream>
#include <SFML/Graphics.hpp>
#include "DrawingCard.h"
#include "Deck.h"
#include "CardHand.h"
#include "CardHandScore.h"
#include "Position.h"
#include "DrawingAllScores.h"
#include "PokerTextScore.h"
#include "DrawPokerHand.h"
#include "DrawScoreName.h"
#include "DrawScoreRate.h"
#include <iomanip>

int main() {
    srand(time(0));
//// for some reason the straight and flush doesnt work. Maybe the problem is shuffle.
    double count =0;

    while(PokerScore::counter[0]!=1) {
    CardHand myHand;
        Deck deck;
        count++;
    deck.shuffle();

    for (int i = 0; i < 5; i++) {
        myHand.addCard(deck.dealCard());
    }
//    std::cout << myHand;

//    std::cout << std::endl;
    PokerScore pokerScore = CardHandScore::myHandScore(myHand);

    pokerScore.scoreToString();
//    std::cout << std::endl;

    //HERE I HAVE TO RESET MY HAND.

    }

    std::string score[10] = {"ROYAL_FLUSH", "STRAIGHT_FLUSH", "FOUR_OF_A_KIND", "FULL_HOUSE", "FLUSH", "STRAIGHT",
                             "THREE_OF_A_KIND", "TWO_PAIR", "ONE_PAIR", "HIGH_CARD"};
    for (int i = 0; i < 10; i++) {

        std::cout << score[i] << ": " << PokerScore::counter[i] << std::endl;

    }



    std::cout << std::endl;
std::cout<<"The program was run "<<count<<" times";



//std::cout<<std::setprecision(16)<<std::fixed;
//    std::vector<double> scoreRatio;
//    for(int i=0; i<10; i++)
//    {
//        scoreRatio.push_back((PokerScore::counter[i]/count)*100);
//    }


    sf::RenderWindow window({1000, 1100, 32}, "The card");
    window.setFramerateLimit(60);

    while (window.isOpen()) {
        sf::Event event;
        sf::RenderStates state;
        while (window.pollEvent(event)) {
            if (sf::Event::Closed == event.type) {
                window.close();
            }
        }

        window.clear(sf::Color::Green);

        DrawPokerHand a;
        a.draw(window, state);

        DrawScoreName scoreNames;
        window.draw(scoreNames);

        DrawScoreRate ratios;
        ratios.getRates(count);
        window.draw(ratios);

        window.display();
    }
//
    return 0;
}

//        c.setPosition({50, 50});
//    DrawingAllScores theScores;
//    for(int i=0; i<theScores.allScores.size(); i++) {
//        for (int j = 0; j < theScores.allScores[0].size(); j++) {
//            DrawingCard c(theScores.allScores[i][j].suit, theScores.allScores[i][j].rank);
//DrawingCard c(myHand[1].suit,myHand[1].rank);

//DrawingCard c(theScores.allScores[0][0].suit, theScores.allScores[0][0].rank);


//Card c;
//DrawingAllScores rF;
//for(int i=0;i<rF.royalFlush.size();i++) {
//    c = rF.royalFlush[i];
//
//    DrawingCard d(c);
//    window.draw(d);
//

//DrawingCard d(HEARTS,ACE);
//CardHand ch;
//    ch.addCard({DIAMONDS, JACK});
//    ch.addCard({SPADES, FOUR});
//    ch.addCard({DIAMONDS, QUEEN});
//    ch.addCard({HEARTS, FOUR});
//    ch.addCard({SPADES, FIVE});
//
//DrawCardHand d(ch);

//DrawCardHand positionCard;
//positionCard.setPosition({10, 0});
//
////DrawingCard c(DIAMONDS,QUEEN);







//PokerTextScore1 theScore;
//theScore.draw(window,state);

//    std::vector<Scores> score= {ROYAL_FLUSH, STRAIGHT_FLUSH, FOUR_OF_A_KIND, FULL_HOUSE, FLUSH, STRAIGHT,
//                             THREE_OF_A_KIND, TWO_PAIR, ONE_PAIR, HIGH_CARD};

//Scores score[10] = {ROYAL_FLUSH, "STRAIGHT_FLUSH", "FOUR_OF_A_KIND", "FULL_HOUSE", "FLUSH", "STRAIGHT",
//                             "THREE_OF_A_KIND", "TWO_PAIR", "ONE_PAIR", "HIGH_CARD"};


//for(int i=0;i<score.size();i++)
//{
//    PokerTextScore drawScore(score[i]);
//    drawScore.setPosition({500, static_cast<float>(i*100)});
//    window.draw(drawScore);
//}



//PokerTextScore dRF(ROYAL_FLUSH);
//dRF.setPosition({dRF.a.width, dRF.a.height});
//window.draw(dRF);
//
//PokerTextScore dSF(STRAIGHT_FLUSH);
//dSF.setPosition({dSF.a.width, dRF.a.height+700});
//window.draw(dSF);








//    sf::RenderWindow window({720, 420, 32}, "The card");
//    window.setFramerateLimit(60);
//
//        DrawingCard c(HEARTS,JACK);
//
//        c.setPosition({100, 100});
//
//        while (window.isOpen()) {
//            sf::Event event;
//            while (window.pollEvent(event)) {
//                if (sf::Event::Closed == event.type) {
//                    window.close();
//                }
//            }
//            window.clear(sf::Color::Green);
//            window.draw(c);
//            window.display();
//        }
//
//
//    return 0;
//}