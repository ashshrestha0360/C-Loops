#include <stdio.h>
int main()
{
    int i = 1, n, factorial = 1;
    printf("Enter any number\n");
    scanf("%d", &n);
    do
    {
        factorial *= i;
        i++;
    } while (i <= n);

    printf("%d\n", factorial);
    return 0;
}