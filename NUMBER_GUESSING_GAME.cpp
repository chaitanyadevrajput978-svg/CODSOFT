#include <iostream>
#include <cstdlib>   
#include <ctime>     
using namespace std;

int main() {
    srand(time(0));
    int number = rand() % 100 + 1;
    int guess;

    cout <<"===== Number Guessing Game =====\n";
    cout << "Guess a number between 1 and 100.\n";

    while (guess != number){
        cout <<"Enter your guess: ";
        cin >> guess;

        if(guess>number) {
            cout <<"Too high! Try again.\n";
        }
        else if(guess<number) {
            cout <<"Too low! Try again.\n";
        }
        else{
            cout <<"Congratulations! You guessed the correct number.";
        }

    } 

    return 0;
}