#include <stdio.h>
int main()
{
    int i = 2;
    do
    {
        printf("%d\t", i);
        i += 2;
    } while (i <= 100);
    return 0;
}