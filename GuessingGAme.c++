#include <iostream>
#include <cstdlib>  
#include <ctime>    
#include <limits>  

using namespace std;

int main() {
   srand(time(0));

    // Generate a random number between 1 and 100
    int randomNumber = rand() % 100 + 1;
    int guess = 0;

    cout << "Guess the number (between 1 and 100)!" << endl;

    // Loop until the user guesses the correct number
    while (guess != randomNumber) {
        cout << "Enter your guess: ";
        cin >> guess;

        // Check if the input is a valid number
        if (cin.fail()) {
            cin.clear(); // Clear error flag
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Ignore wrong input
            cout << "Please enter a valid number." << endl;
            continue;
        }

        if (guess < randomNumber) {
            cout << "Higher!" << endl;
        } else if (guess > randomNumber) {
            cout << "Lower!" << endl;
        }
    }

    cout << "Congratulations! You guessed the right number: " << randomNumber << endl;

    return 0;
}
