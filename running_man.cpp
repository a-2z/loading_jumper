#include "running_man.h"
#include <fstream>
using namespace std;

namespace runner {
    class RunningMan{
        private:
        //fields
            int grid_size;
            tuple<int, int> spriteDims;
        //methods

        public:
            tuple<int, int> & getSpriteDims() { return spriteDims; }
            RunningMan(string animationFile, GridSize)
            {

                ifstream spriteFile(animationFile);
                string x, y;
                getline(spriteFile, x);
                getline(spriteFile, y);
                spriteDims = make_tuple(stoi(x), stoi(y));
            }
    };
}