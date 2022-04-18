//1 8 27 64.....10th term
#include <stdio.h>
int main()
{
    int i, a;
    for (i = 1; i <= 10; i++)
    {
        a = i * i * i;
        printf("%d\t", a);
    }

    return 0;
    
}