//1 to 100 even numbers
#include <stdio.h>
int main()
{
    int i;

    for (i = 2; i <= 100; i += 2)
    {
        printf("%d\t", i);
    }

    return 0;
}