#include "block.h"
#include <vector>
#include <tuple>
#include <string>

#ifndef BOARD_H
#define BOARD_H

class Board {
    public:
    int level; 
    const int width;
    const int height;
    Block * activeBlock;
    std::vector<std::tuple <int,int,char>>  inactiveBlock;
    
    Board ( int level,const int width = 15, const int height = 16);
    void generateBlock ();
    void printBoard();
    void move (std::string command);
    bool canMove (std::string command);

};
#endif