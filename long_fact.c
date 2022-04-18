#include <stdio.h>
int main()
{
    int i, n;
    unsigned long long int factorial = 1;  //Upto n = 33 only!
    printf("Enter any number\n");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        factorial *= i;
    }

    printf("%lu\n", factorial);
    return 0;
}