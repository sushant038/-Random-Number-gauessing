#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()

{
    int randomNumber;
    int no_of_guesses = 0;
    int guessed;


    // Initalize random number generator
    srand(time(0));

    //  Genrate random number between 1 to 100
    randomNumber = (rand() % 100) + 1;

    // print the random number
    // printf("Random Number:%d\n",randomNumber);
    do
    {
        printf("Guess the number");
        scanf("%d", &guessed);
        if (guessed > randomNumber)
        {
            printf("Lower number please!\n");
        }
        else if(guessed<randomNumber)
        {
            printf("Higher number please!\n");
        }
        else{
            printf("congrats!!!\n");

        }
        no_of_guesses++;

    }
     while (guessed != randomNumber);
    printf("You   guessed the number in  %d guesses", no_of_guesses);

    return 0;
}
