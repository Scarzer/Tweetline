// Step one, parse the command line! I want to just get a string into here!
//

#include<iostream>
#include<stdlib.h>

using namespace std;

void parseCLI(const int numArgs, const char* args);
    

int main(int argv, char* argc[]){

    cout << "The Number of arguments: " << argv << endl;
    for(int i = 1; i < argv ; i++){
        cout << "Argument " << i << " is " << argc[i] << endl;
    }
    return 0;
}
