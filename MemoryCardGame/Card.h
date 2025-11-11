//
// #ifndef CARD_H
// #define CARD_H
//
// class Card {
// private:
//     int number; // Card number
//     bool faceUp; // Status of the card (face up or down)
//
// public:
//     Card();
//     Card(int number);
//     virtual ~Card();
//
//     void CardNumber(int number);
//     int getCardNumber() const;
//     void setFaceUp(bool isFaceUp);
//     bool isFaceUp() const;
//     virtual void display() const;
//     void flip();
// };
//
// #endif // CARD_H

#ifndef CARD_H
#define CARD_H

#include <iostream>
using namespace std;

class Card {
private:
    int cardNumber;  // Make sure this is declared
    bool faceUp;

public:
    Card();
    Card(int number);
    virtual ~Card();

    void setCardNumber(int number);
    int getCardNumber() ;
    void setFaceUp(bool isFaceUp);
    bool isFaceUp() ;
    virtual void display() ;
    void flip(); // Flip the card's face-up status
};

#endif // CARD_H
