#include "board.h"
#include "block.h"
#include <iostream>

void Board::printBoard(){
    for (int i = 0; i < width; ++i){
        for (int j = 0; j < height; ++ j){
            // for(const auto& value: activeBlock->blockData) {
            //     std::cout << value[0] << "\n";
            // }        
    }
    }

}

Board::Board (int level,const int width, const int height):
    level(level),width(width),height(height){}

void Board::generateBlock(){
    this->activeBlock = new IBlock();
    std::cout << "type is" << this->activeBlock->type << std::endl;
    // std::cout << this->activeBlock->blockData << std::endl;

}