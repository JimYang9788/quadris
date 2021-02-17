#include "board.h"
#include "block.h"
#include <iostream>

void Board::printBoard(){
    for (int i = 0; i < width; ++i){
        std::cout << " " << std::endl;
    }
}

Board::Board (int level,const int width, const int height):
    level(level),width(width),height(height){}
