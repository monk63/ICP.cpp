#include <iostream>

using namespace std;

int main(int argc, char * argv[]){
    if (argc <= 1){
        cout << "Please specify at least one input value" << endl;
        cout << "Example: hello_world Michael" << endl;
        cerr << "Program Terminating" << endl;
    }
    else{
        cout << "hello world " << argv[1]<< endl;
        return 0;
    }
}