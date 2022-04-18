//sum of n natural numbers using do while
#include <stdio.h>
int main()
{
    int i = 1, n, s = 0;
    printf("Enter any number\n");
    scanf("%d", &n);
    do
    {
        s += i; 
        i++;

    } while (i <= n);

    printf("%d\n", s);
    return 0;
}