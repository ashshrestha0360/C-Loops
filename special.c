#include <stdio.h>
int main()
{
    int i, n, factorial = 1;

    printf("Enter any number\n");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        factorial *= i;
    }
    if (factorial % 2 == 0)
    {
        printf(" Special");
    }
    return 0;
}