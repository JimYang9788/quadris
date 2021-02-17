#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>
#include "game.h"

using namespace std;

int main(int argc, char* argv[]){

    int startLevel = 0;
    int seed = 0;
    string file = "";
    string text = "";

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

    }

    cout << "current start level is: " << startLevel  << endl;
    cout << "current seed is: " << seed  << endl;

    Game game =  Game();
    game.printLevel();
    // game->printLevel();
    return 0; 
}