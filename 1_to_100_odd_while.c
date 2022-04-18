//odd numbers 1 to 100 using while loop
#include <stdio.h>
int main()
{
    int i = 1;
    while (i <= 100)
    {
        printf("%d\t", i);
        i += 2;
    }
    return 0;
}