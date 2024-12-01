#include <iostream>
#include <cstdlib>  
#include <ctime>    
using namespace std;

int main() {
    srand(time(0)); 
    int target = rand() % 100 + 1; 
    int guess;
    int attempts = 0; 
    cout << "Welcome to the Number Guessing Game!" << endl;
    cout << "I have chosen a number between 1 to 100. Try to guess it!" << endl;

    while (true) {
        cout << "Enter your guess: ";
        cin >> guess;
        attempts++;

        if (guess < target) {
            cout << "Too low! Try again." << endl;
        } else if (guess > target) {
            cout << "Too high! Try again." << endl;
        } else {
            cout << "Congratulations! You guessed the number in " << attempts << " attempts." << endl;
            break; 
        }
    }

    cout << "Thank you for playing!" << endl;
    return 0;
}
