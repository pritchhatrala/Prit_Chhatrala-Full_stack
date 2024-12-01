#include <iostream>
using namespace std;
double calculateArea (double length, double width)
{
    return length * width;

}



int main() {
    double length,width;

cout<< "Enter the Length of the rectangle : ";
cin>>length;

cout<< "Enter the Width of the rectangle : ";
cin>>width;

double area = calculateArea(length, width);
cout<<"The area of the rectangle is :"<< area << endl;

    return 0;
}