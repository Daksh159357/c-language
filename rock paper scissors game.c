#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    char user_choice, computer_choice;
    int result;

    int random_number = rand() % 3;
    srand(time(NULL));
    if (random_number == 0)
    {
	computer_choice = 'r';
    }
    else if (random_number == 1)
    {
	computer_choice = 'p';
    }
    else
    {
	computer_choice = 's';
    }
    printf("Enter your choice (r for rock, p for paper, s for scissors): ");
    scanf(" %c", &user_choice);
    if(user_choice == 'r' && computer_choice == 's')
    {
	result = 1;
    }
    else if (user_choice == 'p' && computer_choice == 'r')
    {
	result = 1;
    }
    else if (user_choice == 's' && computer_choice == 'p')
    {
	result = 1;
    }
    else if (user_choice == computer_choice)
    {
	result = 0;
    }
    else
    {
	result = -1;
    }
    if (result == 1)
    {
	printf("You win! Computer chose %c.\n", computer_choice);
    }
    else if (result == 0)
    {
	printf("It's a tie! Computer also chose %c.\n", computer_choice);
    }
    else
    {
	printf("You lose! Computer chose %c.\n", computer_choice);
    }
    return 0;
}
