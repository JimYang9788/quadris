#ifndef BLOCK_H
#define BLOCK_H
#include <vector>
#include <tuple>
#include <string>

class Block {
    public:
    char type;
    std::vector < std::tuple < int, int, char > > blockData;    
    Block ();
};

class IBlock: public Block {
    public:
    IBlock ();
};


class TBlock: public Block {
    public:
    TBlock ();
};

class LBlock: public Block {
    public:
    LBlock ();
};


#endif