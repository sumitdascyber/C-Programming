#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0));  
    int player, computer;
    char choice;

    do
    {
        computer = rand() % 3;

        /*
            0 --> Rock
            1 --> Paper
            2 --> Scissor
        */
        printf("Choose 0 for Rock, 1 for Paper and 2 for Scissor \n");
        scanf("%d", &player);
        printf("Computer chose %d\n", computer);

        if (player == 0 && computer == 0)
        {
            printf("Its a Draw!\n");
        }
        else if (player == 0 && computer == 1)
        {
            printf("Computer Wins!\n");
        }
        else if (player == 0 && computer == 2)
        {
            printf("You Win!\n");
        }
        else if (player == 1 && computer == 0)
        {
            printf("You Win!\n");
        }
        else if (player == 1 && computer == 1)
        {
            printf("Its a Draw!\n");
        }
        else if (player == 1 && computer == 2)
        {
            printf("Computer Wins!\n");
        }
        else if (player == 2 && computer == 0)
        {
            printf("Computer Wins!\n");
        }
        else if (player == 2 && computer == 1)
        {
            printf("You Win!\n");
        }
        else if (player == 2 && computer == 2)
        {
            printf("Its a Draw!\n");
        }
        else
        {
            printf("Invalid Input!\n");
        }

        printf("Do you want to play again? (Y/N): ");
        scanf(" %c", &choice);

    } while (choice == 'Y' || choice == 'y');

    printf("\nThanks for Playing!\n");

    return 0;
}