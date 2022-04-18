#include <stdio.h>
int main()
{
    int i = 1, a = 1, d = 1;
    do
    {
        printf("%d\n", a);
        a += d;
        i++;
        d++;
    } while (i <= 10);

    return 0;
}