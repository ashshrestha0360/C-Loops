#include <stdio.h>
int main()
{
    int i = 1, a = 5, d = 5;
    do
    {
        printf("%d\n", a);
        a += d;
        i++;
        d += 5;
    } while (i <= 10);

    return 0;
}