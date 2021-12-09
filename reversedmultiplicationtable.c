#include <stdio.h>
int main ()
{
    int a;
    int b=10;
    printf("enter any number\n");
    scanf("%d",&a);
    for (b=a;b>0;b--)
    {
    printf("%d x %d = %d\n",a,b,a*b);
    }
    return 0;
}