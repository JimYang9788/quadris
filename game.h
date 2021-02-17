#ifndef GAME_H
#define GAME_H
#include "board.h"


class Game {
    public:
    int level;
    int score;
    int seed;
    std::string user;
    Board * board;
    Game (int level, std::string user, int seed);
    void printLevel();
    void printGame();
    void printMegaData();
};
#endif