#include<stdio.h>
int main ()
{
    int a,b,c;b=1,c=1;
    printf("enter any number\n");
    scanf("%d",&a);
    do
    {
c=c*b;
b++;
    } while (b<=a);
    printf("the factorial of the given number is %d\n",c);
    return 0;

    
}