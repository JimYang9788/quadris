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
    blockData.push_back (std::make_tuple(0, 0,type));
    blockData.push_back (std::make_tuple(0, 1,type));
    blockData.push_back (std::make_tuple(0, 2,type));
    blockData.push_back (std::make_tuple(0, 3,type));
}
