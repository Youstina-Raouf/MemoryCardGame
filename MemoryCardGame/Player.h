// #ifndef PLAYER_H
// #define PLAYER_H
//
//
// #include <iostream>
// #include <string>
// using namespace std;
//
// class Player {
// private:
//     string name;
//     int score;
//
// public:
//
//     Player();
//     Player(const string &name);
//
//
//     ~Player();
//
//
//     string getName() const;
//     void setName(const string &name);
//
//     int getScore() const;
//     void setScore(int score);
//
//
//     void displayScore() const;
// };
//
// #endif // PLAYER_H
#ifndef PLAYER_H
#define PLAYER_H

#include <string>
#include <iostream>
using namespace std;
class Player {
private:
    string name;
    int score;

public:
    Player();
    Player(string playerName);
    ~Player();

    string getName() const;
    void setName(const string& playerName);
    int getScore() const;
    void setScore(int playerScore);
    void displayScore() const;
};

#endif // PLAYER_H