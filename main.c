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
int main(int argc, char const *argv[])
{
    playGame();
    return 0;
}
