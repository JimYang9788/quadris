#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>

#include "game.h"
#include "board.h"

Game::Game (int level, std::string user, int seed):
level(level),board(new Board(level)),score(0), user(user), seed(seed){}

void Game::printLevel(){
        std::cout << "This is a game started at level " << level << std::endl;
}

void Game::printGame(){
    board->printBoard();
}

void Game::printMegaData(){
    const int width = 15; 

    for (int i = 0; i < width; ++i){
        std::cout << '-';
    }
    std::cout << std::endl;
    std::cout << "Current User: " << user << std::endl;
    std::cout << "Current Level: " << level << std::endl;
    std::cout << "Current Score: " << score << std::endl;
    for (int i = 0; i < width; ++i){
        std::cout << '-';
    }
    std::cout << std::endl;
}

