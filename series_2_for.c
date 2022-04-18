//5 25 125.........10th term
#include <stdio.h>
#include <math.h>
int main()
{
    int i, a;
    for (i = 1; i <= 10; i++)
    {
        a = pow(5, i);
        printf("%d\n", a);
    }

    return 0;
}