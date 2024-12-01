#include <iostream>
using namespace std;

double add(double a, double b) {
    return a + b;
}

double subtract(double a, double b) {
    return a - b;
}

double multiply(double a, double b) {
    return a * b;
}

double divide(double a, double b) {
    if (b != 0) {
        return a / b;
    } else {
        cout << "Error! Division by zero." << endl;
        return 0; 
    }
}

int main() {
    double num1, num2;
    int choice;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    cout << "Select an operation: " << endl;
    cout << "1. Add" << endl;
    cout << "2. Subtract" << endl;
    cout << "3. Multiply" << endl;
    cout << "4. Divide" << endl;
    cout << "Enter your choice (1/2/3/4): ";
    cin >> choice;

    double result;

    switch (choice) {
        case 1:
            result = add(num1, num2);
            cout << "Result: " << result << endl;
            break;
        case 2:
            result = subtract(num1, num2);
            cout << "Result: " << result << endl;
            break;
        case 3:
            result = multiply(num1, num2);
            cout << "Result: " << result << endl;
            break;
        case 4:
            result = divide(num1, num2);
            if (num2 != 0) {
                cout << "Result: " << result << endl;
            }
            break;
        default:
            cout << "Invalid choice!" << endl;
    }

    return 0;
}
