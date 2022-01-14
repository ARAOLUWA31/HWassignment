#include <iostream>
#include <fstream>
#include <string>
using namespace std;

// output format to use IDENTICALLY:
//BSH:Saru> ./filesize input.3lines input.1line 
//program: ./filesize
// input.3lines: 3
// input.1line: 1
//
int main( int argc, char* argv[] )
{
    ifstream myfile;
    string tmp;
    std::cout << "program: " << argv[0] << endl;
    
    for (int arg = 1; arg < argc; arg++){
        int counter = 0;
       
        myfile.open(argv[arg]);
        if(myfile.is_open()){
            while(!(myfile.eof())){
            //instead of trying to track '\n' and endl;, just use getline til you cant and count that
            getline(myfile, tmp);
            counter++;
            }
            cout << " " << argv[arg]<< ": " << counter << endl;
            myfile.close();
        }else{
            cout << argv[arg] << ": " << "-1" << endl;

    }
    exit(0); 
}
