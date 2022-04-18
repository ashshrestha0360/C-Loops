#include <stdio.h>
int main()
{
    int i = 1, s = 0, n;
    printf("Enter any number\n");
    scanf("%d", &n);
    while (i <= n)
    {
        s += i;
        i++;
    }
    printf("%d\n", s);

    return 0;
}