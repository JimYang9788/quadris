#include "block.h"
#ifndef BOARD_H
#define BOARD_H

class Board {
    public:
    int level; 
    const int width;
    const int height;
    Block * activeBlock;
    



    Board ( int level,const int width = 15, const int height = 16);
    void printBoard();

};
#endif