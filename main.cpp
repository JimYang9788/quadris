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
    while (true){
        string command = "";
        getline(cin, command);
        
        if (command == "exit"){
            cout << "Thank you" << endl;
            break;
        }
        else 
        {
            cout << command << endl;
            game->printMegaData();
            game->printGame();
        }
    }
    delete game;
    return 0; 
}