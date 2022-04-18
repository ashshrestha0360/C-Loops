// 1 8 27 64 ..........10th term
#include <stdio.h>
#include <math.h>
int main()
{
    int i = 1, a;
    while (i <= 10)
    {
        a = pow(i, 3);
        printf("%d\t", a);
        i++;
    }
    return 0;
}