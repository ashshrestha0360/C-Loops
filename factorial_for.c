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

    printf("%d\n", factorial);
    return 0;
}