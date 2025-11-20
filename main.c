#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int playGame() {
    int computerChoice;
    int playerChoice;
    int playerScore = 0;
    int computerScore = 0;
    int message;

    while(1) {
    printf("\nPlease pick rock, paper or scissors. \n\n");
    printf("1 - Rock\n");
    printf("2 - Paper\n");
    printf("3 - Scissors\n\n");
    scanf("%i", &playerChoice);

    srand(time(NULL));
    computerChoice = rand()%2 + 1;

    printf("\n--------------------------------------------");
    switch(playerChoice) {
        case 1:
        printf("\nYou picked: ROCK\n");
        break;

        case 2:
        printf("\nYou picked: PAPER\n");
        break;

        case 3:
        printf("\nYou picked: SCISSORS\n");
        break;
    }

    if(playerChoice > 3 || playerChoice < 1) {
        printf("\n\nPlease write a number between 1-3");
        printf("\n\n--------------------------------------------");
        continue;
    } else {
    switch(computerChoice) {
        case 1:
        printf("Computer picked: ROCK\n");
        break;

        case 2:
        printf("Computer picked: PAPER\n");
        break;

        case 3:
        printf("Computer picked: SCISSORS\n");
        break;
    }}

    if(playerChoice == computerChoice) {
        printf("\nDraw");
        printf("\nYour score: %i", playerScore);
        printf("\nComputer score: %i", computerScore);
    }
    else if(playerChoice == 1 && computerChoice == 3) {
        printf("\nGood job!");
        playerScore++;
        printf("\nYour score: %i", playerScore);
        printf("\nComputer score: %i", computerScore);
    }
    else if(playerChoice == 2 && computerChoice == 1) {
        printf("\nWe have a winner here!");
        playerScore++;
        printf("\nYour score: %i", playerScore);
        printf("\nComputer score: %i", computerScore);
    }
    else if(playerChoice == 3 && computerChoice == 2) {
        printf("\nWINNER WINNER, Chicken dinner!");
        playerScore++;
        printf("\nYour score: %i", playerScore);
        printf("\nComputer score: %i", computerScore);
    }
    else {
        printf("\nYou loose");
        computerScore++;
        printf("\nYour score: %i", playerScore);
        printf("\nComputer score: %i", computerScore);
    }

    if(playerScore == 5) {
        printf("\n\nYou won the game! Thanks for playing!");
        getchar() != '\n';
        break;
    }
    else if(computerScore == 5){
        printf("\n\nYou loose! Thanks for playing!");
        getchar() != '\n';
        break;
    }
    printf("\n--------------------------------------------");
}
    int playAgain;

    printf("\n\nDo you wanna play again?");
    printf("\n1 - Yes\n2 - No\n\n");
    scanf("%i", &playAgain);

    if(playAgain == 1) {
        playGame();
    }
    else {
        return 0;
    }
}
int main(int argc, char const *argv[])
{
    playGame();
    return 0;
}
