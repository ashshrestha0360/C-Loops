#include <stdio.h>
int main()
{
    int i, a = 1, d = 1;
    for (i = 1; i <= 10; i++)
    {
        printf("%d\n", a);
        a += d;
        d++;
    }

    return 0;
    
}