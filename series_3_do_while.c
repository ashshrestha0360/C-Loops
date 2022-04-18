#include<stdio.h>
int main()
{
    int i = 1, a;
    do
    {
        a = 2 * i * i;
        printf("%d\n", a);
        i++;
    } while (i <= 10);
    
    return 0;
}