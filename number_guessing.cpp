#include <iostream>
#include <cstdlib>  // for rand() and srand()
#include <ctime>    // for time()

using namespace std;

int main() {
    // Seed random number generator
    srand(time(0));
    int secretNumber = rand() % 100 + 1; // Random number between 1 and 100
    int guess;
    int attempts = 0;

    cout << "🎯 Welcome to the Number Guessing Game!" << endl;
    cout << "Guess the number (between 1 and 100):" << endl;

    do {
        cout << "Enter your guess: ";
        cin >> guess;
        attempts++;

        if (guess > secretNumber) {
            cout << "Too high! Try again. 🔽" << endl;
        } else if (guess < secretNumber) {
            cout << "Too low! Try again. 🔼" << endl;
        } else {
            cout << "🎉 Correct! You guessed it in " << attempts << " attempts." << endl;
        }

    } while (guess != secretNumber);

    return 0;
}
