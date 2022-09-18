#include <string>
#include <vector>
#include <tuple>


enum GridSize {SMALL, MEDIUM, LARGE}; 

class RunningMan 
{
    public:
        RunningMan(std::string animationFile, GridSize);  
        std::tuple<int, int> & getSpriteDims();
    private:
        std::vector<std::string> running_modes;
        std::string getRunnerState();
        void load_animations();
};
