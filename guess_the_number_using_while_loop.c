// Guess the number using while loop

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

    int my_num, user_num;
    srand(time(NULL));
    my_num = rand() % 10;

    printf("I have a number in my mind(0-10). Can you guess it?\n");

    while (1)
    {
        printf("Enter your number:");
        scanf("%d", &user_num);
        if (my_num == user_num)
        {
            printf("Congrats! You got the number.\n");
            break;
        }
        else if (my_num >= user_num)
        {
            printf("The number is greater than %d\n", user_num);
        }
        else
        {
            printf("The number is smaller than %d\n", user_num);
        }
    }

    return 0;
}