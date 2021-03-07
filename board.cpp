#include "board.h"
#include "block.h"
#include <iostream>
#include <cstdlib>


void Board::printBoard(){
    for (int i = 0; i < height; ++i){
        for (int j = 0; j < width; ++ j){
            bool isActive = false;
            for (auto & element : this->activeBlock->blockData) {
                if ((i == std::get<0> (element)) && (j == std::get<1> (element))){
                    std:: cout << std::get<2> (element);
                    isActive = true;
                }
            }
            for (auto & element : this->inactiveBlock) {
                if ((i == std::get<0> (element)) && (j == std::get<1> (element))){
                    std:: cout << std::get<2> (element);
                    isActive = true;
                }
            }
            if (!isActive){
                std::cout << ' ';
            }      
        }
        std::cout << std::endl;
    }

}

bool Board::canMove (std::string command){
    if (this->activeBlock == nullptr){
        return false;
    }
    for (auto & element : this->activeBlock->blockData) {
        int i = std::get<0> (element);
        int j = std::get<1> (element);
        if (command == "d"){
            i += 1;
        }
        else if (command == "r"){
            j += 1;
        }
        else if (command == "l"){
            j -= 1;
        }
        // Check boundary 
        if ( !((i >= 0) && (i < this->height))){
            return false;
        }
        if ( !((j >= 0) && (j < this->width))){
            return false;
        }
        // Check collision
        for (auto & iblock: this->inactiveBlock){
            int r = std::get<0> (iblock);
            int c = std::get<1> (iblock);
            if ((r == i) && (c == j)){
                return false; 
            }
        }
    }

    return true;
}

void Board::move (std::string command){
    if (!this->canMove(command)){
        return;
    }
    if (command == "d"){
        for (auto & element : this->activeBlock->blockData) {
            std::get<0> (element) = std::get<0> (element) + 1;
        }
    }
    else if (command == "r"){
        for (auto & element : this->activeBlock->blockData) {
            std::get<1> (element) = std::get<1> (element) + 1;
        }
    }
    else if (command == "l"){
        for (auto & element : this->activeBlock->blockData) {
            std::get<1> (element) = std::get<1> (element) - 1;
        }
    }
    else if (command == "drop"){
        while (this->canMove("d")){
            this->move("d");
        }
        for (auto & element : this->activeBlock->blockData) {
            this->inactiveBlock.push_back (element); 
        }
        for (auto & element : this->activeBlock->blockData){
            this->activeBlock->blockData.pop_back();
        }
        this->generateBlock();
    }


}

Board::Board (int level,const int width, const int height):
    level(level),width(width),height(height){
    }

void Board::generateBlock(){
    int randomNumber; 
    randomNumber = rand() % 3;
    if (randomNumber == 0){
        this->activeBlock = new IBlock();
    }
    else if (randomNumber == 1){
        this->activeBlock = new TBlock();
    }
    else{
        this->activeBlock = new LBlock();
    }

}