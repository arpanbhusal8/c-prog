#include<stdio.h>
int main ()
{
    int a,b,c;b=1,c=0;
    printf ("enter any number \n");
    scanf("%d",&a);
    while (b<=a)
    {
        c=c+b;
        b++;
    }
    printf("the sum upto a is %d\n",c);
    return 0;
    
    
}
