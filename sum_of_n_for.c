//Sum of n natural numbers
#include <stdio.h>
int main()
{
    int i, s = 0, n;
    printf("Enter any number\n");
    scanf("%d", &n);
    for (i = 0; i <= n; i++)
    {
        s += i;
    }

    printf("%d\n", s);
    return 0;
}