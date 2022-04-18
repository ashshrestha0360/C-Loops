#include <stdio.h>
int main()
{
    int i, a = 5, d = 5;
    for (i = 1; i <= 10; i++)
    {
        printf("%d\n", a);
        a += d;
        d += 5;
    }
    
    return 0;
}