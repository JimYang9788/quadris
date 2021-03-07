#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>
#include "game.h"

using namespace std;


#define padding 3
 
int main(int argc, char* argv[]){

    int startLevel = 0;
    int seed = 0;
    string file = "";
    string text = "";
    string user = "Jim";

    for (int i = 1; i < argc; ++i){
        if (string (argv[i]) == "-level"){
            startLevel = atoi (argv[++i]);
        }
        if (string (argv[i]) == "-seed"){
            seed = atoi (argv[++i]);
        }
        if (string (argv[i]) == "-scriptfile"){
            file = argv[++i];
        }
        if (string (argv[i]) == "-text"){
            text = argv[++i];
        }
        if (string (argv[i]) == "-user"){
            user = argv[++i];
        }

    }

    Game * game = new Game(startLevel,user, seed);
    cout << "Press Any Key To Start, Enter 'exit' to quit" << endl;
    bool started = false;
    while (true){
        string command = "";
        getline(cin, command);
        
        if (command == "exit"){
            cout << "Thank you" << endl;
            break;
        }
        else if (started == false){
            started = true;
            game->board->generateBlock();
            game->printMegaData();
            game->printGame();

        }
        else if (command == "d"){
            game->board->move('d');
            game->printMegaData();
            game->printGame();
        }
        else if (command == "l"){
            game->board->move('l');
            game->printMegaData();
            game->printGame();
        }
        else if (command == "r"){
            game->board->move('r');
            game->printMegaData();
            game->printGame();
        }
        else if (command == "g"){
            game->board->generateBlock();
            game->printMegaData();
            game->printGame();
        }
        else 
        {
            game->printMegaData();
            game->printGame();
        }
    }
    delete game;
    return 0; 
}