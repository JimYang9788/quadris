#include "block.h"
#include <vector>
#include <tuple>
#include <string>
#include <iostream>


Block::Block():
type(), blockData(std::vector<std::tuple<int,int,char>> ()){
}

IBlock::IBlock():
Block(){
    this->type = 'I';
    this->blockData.push_back (std::make_tuple(0, 0,type));
    this->blockData.push_back (std::make_tuple(0, 1,type));
    this->blockData.push_back (std::make_tuple(0, 2,type));
    this->blockData.push_back (std::make_tuple(0, 3,type));
}


TBlock::TBlock():
Block(){
    this->type = 'T';
    this->blockData.push_back (std::make_tuple(0, 0,type));
    this->blockData.push_back (std::make_tuple(0, 1,type));
    this->blockData.push_back (std::make_tuple(0, 2,type));
    this->blockData.push_back (std::make_tuple(1, 1,type));
}


LBlock::LBlock():
Block(){
    this->type = 'L';
    this->blockData.push_back (std::make_tuple(0, 0,type));
    this->blockData.push_back (std::make_tuple(0, 1,type));
    this->blockData.push_back (std::make_tuple(0, 2,type));
    this->blockData.push_back (std::make_tuple(1, 2,type));
}
