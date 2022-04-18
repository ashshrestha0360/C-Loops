#include<stdio.h>
#include<math.h>
int main()
{
    int i = 1, a;
    do
    {
        a = pow( 5, i);
        printf("%d\n", a);
        i++;
    } while (i <= 10);
    
    return 0;
}