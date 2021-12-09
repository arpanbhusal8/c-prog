#include <stdio.h>
int main ()
{
    int a,b,c,d;b=1,c=0;
    printf ("enter any number\n");
    scanf("%d",&a);
    while (b<=10)
    {
d=a*b;
c=c+d;
b++;
    }
    printf ("the sum of the multiplication number of the entered number upto 10 is %d\n",c);
    return 0;
    
}