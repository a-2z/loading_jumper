#include <iostream>
#include <string> //mutable strings
#include <fstream>
#include "running_man.h"
using namespace std;

/**
 * @brief 
 *
 * 
 * @return int 
 */
int main(int argc, char *argv[]){
    GridSize size;
    switch (atoi(argv[2])) {
        case 1:
            size = SMALL;
            break;
        case 2:
            size = MEDIUM;
            break;
        case 3:
            size = LARGE;
            break;
        default:
            size = SMALL;
    }

    RunningMan runner = RunningMan(argv[1], size);
    cout << to_string(get<0>(runner.getSpriteDims())) << to_string(get<1>(runner.getSpriteDims())) << endl;
}
