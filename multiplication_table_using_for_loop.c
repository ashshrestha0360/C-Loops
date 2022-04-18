// Multiplication table of 5 using for loop

#include <stdio.h>
#include <conio.h>
int main()
{

    int i, n = 1;
    printf("xxx Multiplication table of 5 xxx\n");

    for (i = 1; i <= 10; i++)
    {
        printf("5 x %d= %d\n", i, n * i);
    }
    return 0;
}