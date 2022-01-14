#include <iostream>
#include <fstream>
using namespace std;

// output format to use IDENTICALLY:
//BSH:Saru> ./filesize input.3lines input.1line 
//program: ./filesize
// input.3lines: 3
// input.1line: 1
//
int main( int argc, char* argv[] )
{
    // just to get you started, this is how to refer to the arguments that were passed
    cout << "program: " << argv[0] << endl;
    ifstream ins;

    for (int arg = 1; arg < argc; ++arg){
            int lines = 0;
            string str;
            ins.open(argv[arg]);

            if(ins.fail())
                lines = -1;
            else{
                while(getline(ins, str)){
                    lines++;
                }
            }
            ins.close();
            std::cout << " " << argv[arg] << ":" << " " << lines << "\n";

    }

    exit(0); // this means that the program executed correctly!
}
