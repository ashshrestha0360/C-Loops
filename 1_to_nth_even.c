#include <stdio.h>
int main()
{
    int i = 1, n;
    printf("Enter the number\n");
    scanf("%d", &n);
    while (i <= n)
    {
        printf("%d\t", i * 2);
        i++;
    }
    return 0;
}