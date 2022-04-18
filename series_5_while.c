#include<stdio.h>
int main()
{
    int i=1,a=5,d=5;
    while (i<=10)
    {
        printf("%d\n",a);
        a+=d;
        d+=5;
        i++;
    }
    return 0;
    
}