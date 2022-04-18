//1 8 27 64.....10th term
#include <stdio.h>
int main()
{
    int i = 1, a;
    do
    {
        a = i * i * i;
        printf("%d\n", a);
        i++;
    } while (i <= 10);
    return 0;
}