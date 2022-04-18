// 1 11 111 1111 11111
#include <stdio.h>
int main()
{
    int i, j = 1;
    for (i = 1; i <= 5; i++)
    {
        printf("%d\t", j);
        j = j * 10 + 1;
    }
    return 0;
}