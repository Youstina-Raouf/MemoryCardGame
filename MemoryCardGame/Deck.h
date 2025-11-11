
#ifndef DECK_H
#define DECK_H

#include "Card.h"

class Deck {
private:
    Card** cards;
    int size;

public:
     Deck(int s);

    ~Deck();

    void shuffle();
    void displayGrid() const;
};

#endif // DECK_H