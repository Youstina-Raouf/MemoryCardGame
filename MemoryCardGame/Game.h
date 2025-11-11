#ifndef GAME_H
#define GAME_H

#include "Deck.h"
#include "Player.h"

class Game {
private:
    Deck deck;
    Player player1;
    Player player2;

public:
    Game();
    ~Game();
    void initializeGame();
    void displayScores() const;
};

#endif // GAME_H
