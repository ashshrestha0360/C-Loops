#include <stdio.h>
int main()
{
    int i = 1, a;
    while (i <= 10)
    {
        a = 2 * i * i;
        printf("%d\n", a);
        i++;
    }
    return 0;
}