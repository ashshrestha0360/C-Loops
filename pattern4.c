#include <stdio.h>
int main()
{
    int i, f1 = 1, f2 = 1, f3, n;
    printf("Enter the value:");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        printf("%d\t", f1);
        f3 = f1 + f2;
        f1 = f2;
        f2 = f3;
    }

    return 0;
}