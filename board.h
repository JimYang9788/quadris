#ifndef BOARD_H
#define BOARD_H

class Board {
    public:
    int level; 
    const int width;
    const int height;
    Board ( int level,const int width = 15, const int height = 16);
    void printBoard();
    
};
#endif