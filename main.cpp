#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>

using namespace std;

int main(int argc, char* argv[]){

// • -text runs the program in text-only mode. No graphics are displayed. The default behaviour
// (no -text) is to show both text and graphics.
// • -seed xxx sets the random number generator’s seed to xxx. If you don’t set the seed, you always get the same random sequence every time you run the program. It’s good for testing, but not much fun.
// • -scriptfile xxx Uses xxx instead of sequence.txt as a source of blocks for level 0.
// • -startlevel n Starts the game in level n. The game starts in level 0 if this option is not
// supplied.

    string startLevel = "0";

    for (int i = 1; i < argc; ++i){
        if (string (argv[i]) == "--level"){
            startLevel = argv[++i];
        }
    }

    cout << "current start level is: " << startLevel  << endl;
    return 0; 
}