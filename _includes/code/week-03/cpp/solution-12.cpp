#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void PlayRPS(char playerChoice);

int main() {
    srand(time(NULL));
    char choice;

    cout << "Enter choice (R = Rock, P = Paper, S = Scissors): ";
    cin >> choice;

    PlayRPS(choice);

    return 0;
}

void PlayRPS(char playerChoice) {
    int randNum = rand() % 3;
    char compChoice;

    if (randNum == 0) {
        compChoice = 'R';
    } else if (randNum == 1) {
        compChoice = 'P';
    } else {
        compChoice = 'S';
    }

    if (compChoice == 'R') {
        cout << "Computer chose: Rock" << endl;
    } else if (compChoice == 'P') {
        cout << "Computer chose: Paper" << endl;
    } else {
        cout << "Computer chose: Scissors" << endl;
    }

    if (playerChoice == compChoice) {
        cout << "It's a tie!" << endl;
    } else if ((playerChoice == 'R' && compChoice == 'S') ||
               (playerChoice == 'P' && compChoice == 'R') ||
               (playerChoice == 'S' && compChoice == 'P')) {
        cout << "Player wins!" << endl;
    } else {
        cout << "Computer wins!" << endl;
    }
}
