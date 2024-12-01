#include <iostream>
using namespace std;

int main() {

    int num = 10;            
    double result = num;    

    cout << "Implicit Type Conversion:" << endl;

    cout << "Integer value: " << num << endl;
    cout << "Converted to double: " << result << endl;

    double decimal = 7.8;     
    int rounded = (int)decimal; 

    cout << "\nExplicit Type Conversion:" << endl;

    cout << "Double value: " << decimal << endl;
    cout << "Converted to integer: " << rounded << endl;

    return 0;
}
