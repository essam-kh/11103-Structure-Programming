#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void PlayRPS(char playerChoice);

int main() {
    srand(time(NULL));
    char choice;

    printf("Enter choice (R = Rock, P = Paper, S = Scissors): ");
    scanf(" %c", &choice);

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
        printf("Computer chose: Rock\n");
    } else if (compChoice == 'P') {
        printf("Computer chose: Paper\n");
    } else {
        printf("Computer chose: Scissors\n");
    }

    if (playerChoice == compChoice) {
        printf("It's a tie!\n");
    } else if ((playerChoice == 'R' && compChoice == 'S') ||
               (playerChoice == 'P' && compChoice == 'R') ||
               (playerChoice == 'S' && compChoice == 'P')) {
        printf("Player wins!\n");
    } else {
        printf("Computer wins!\n");
    }
}
