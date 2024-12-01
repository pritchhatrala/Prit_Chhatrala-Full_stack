#include <iostream>
using namespace std;

int globalVar = 50;

void modifyGlobal() {
    globalVar = 200;
    cout << "\nInside modifyGlobal() - Global variable modified: " << globalVar << endl;
}

void localExample() {
    int localVar = 30; 
    cout << "\nInside localExample() - Local variable: " << localVar << endl;
    cout << "Inside localExample() - Global variable: " << globalVar << endl;  
}

int main() {
    int localVar = 10;

    cout << "\nInside main() - Local variable (main): " << localVar << endl; 
    cout << "Inside main() - Global variable: " << globalVar << endl;       

    localExample();

    modifyGlobal();

    cout << "\nInside main() after modifyGlobal() - Global variable: " << globalVar << endl;

    return 0;
}
