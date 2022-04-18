#include <stdio.h>
int main()
{
    int i = 1, a = 1, d = 1;
    while (i <= 10)
    {
        printf("%d\n", a);
        a += d;
        d++;
        i++;
    }
    return 0;
}