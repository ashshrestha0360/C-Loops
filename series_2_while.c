#include <stdio.h>
#include <math.h>
int main()
{
    int i = 1, a;
    while (i <= 10)
    {
        a = pow(5, i);
        printf("%d\n", a);
        i++;
    }
    return 0;
}