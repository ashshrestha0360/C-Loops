//Multiplication table of 5 using while loop

#include <stdio.h>
#include <conio.h>
int main()
{

    int i = 1;
    int n = 5;
    printf("xxx Multiplication table of 5 xxx\n");
    while (i <= 10)
    {
        printf("5 x %d = %d\n", i, i * n);
        i++;
    }

    return 0;
}