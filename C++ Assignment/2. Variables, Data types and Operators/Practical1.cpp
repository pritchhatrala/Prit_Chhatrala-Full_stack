#include <iostream>
using namespace std;



int main() {

int a = 10;
float b = 10.5;
double c = 7.25;
char d = 'P';
bool e = false;


cout << " Integer a: " << a << endl;
cout << " Float b: " << b << endl;
cout << " Double c: " << c << endl;
cout << " Char d: " << d << endl;
cout << " Bool e: " << e << endl;


int sum = a + 5;
float value = b * b;
double val = b * c;
char letter =  d ;
bool condition = !e;

cout << "\nResult of Operation :"<< endl;
cout<<"Sum of a is : "<< sum << endl;
cout<<"Value of b is : "<< value << endl;
cout<<"Value of c is : "<< val <<endl;
cout<<"Letter is : "<< letter <<endl;
cout<<"condition is : "<< condition <<endl;

    return 0;
}