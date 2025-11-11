#include "Card.h"
#include "StandardCard.h"
#include "BonusCard.h"
#include "PenaltyCard.h"
#include <iostream>
#include "StandardCard.h"

using namespace std;

Card::Card() {
    cardNumber=0;
    faceUp=false;
}


Card::Card(int num){
    cardNumber=num;
    faceUp=false;
}
Card::~Card() {
}

void Card::setCardNumber(int number) {
    cardNumber = number;
}
int Card::getCardNumber() {
    return cardNumber;
}
void Card::setFaceUp(bool isFaceUp) {
    faceUp = isFaceUp;
}
bool Card::isFaceUp() {
    return faceUp;
}

void Card::display(){
    if (faceUp) {
        cout << cardNumber << " ";
    } else {
        cout << "* ";
    }
}

StandardCard::StandardCard() : Card() {

}
StandardCard::StandardCard(int num) : Card(num) {

}
StandardCard::~StandardCard(){

}
BonusCard::BonusCard() : Card() {

}
BonusCard::BonusCard(int num) : Card(num) {

}
BonusCard::~BonusCard() {

}

PenaltyCard::PenaltyCard() : Card() {

}
PenaltyCard::PenaltyCard(int num) : Card(num) {

}
PenaltyCard::~PenaltyCard() {

}
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
Deck::Deck(int s) : size(s) {
    cards = new Card *[size];
    for (int i = 0; i < size; ++i) {
        if (i < 8) {
            cards[i] = new StandardCard(i + 1);
        } else if (i < 12) {
            cards[i] = new BonusCard(i + 1);
        } else {
            cards[i] = new PenaltyCard(i + 1);
        }
    }
}

Deck::~Deck() {
    for (int i = 0; i < size; i++)
        delete cards[i];
        delete[] cards;
}

void Deck::shuffle() {
    for (int i = 0; i < size; i++) {
        int randomIndex = rand() % size;
        swap(cards[i], cards[randomIndex]);
    }

}

void Deck::displayGrid() const {
    for (int i = 0; i < size; i++) {
        cards[i]->display();
        if ((i + 1) % 4 == 0)
            cout << endl;

    }
}
class Player {
    string name;
    int score;
public:
    Player(string playerName = "Unnamed") {
        name = playerName;
        score = 0;
    }
    void displayScore() const {
        cout << name << ": " << score << endl;
    }
};

class Game {
    Deck deck;
    Player player1, player2;

    public:
    Game() : deck(16), player1("Alice"), player2("Bob") {}
    void initializeGame();
    void displayScores();
};

void Game::initializeGame() {
    deck.shuffle();
    cout << "Game Started" << endl;
    deck.displayGrid();
}

void Game::displayScores() {
    player1.displayScore();
    player2.displayScore();
}

int main() {
    Game game;
    game.initializeGame();
    game.displayScores();
    return 0;
}
