#include <stdio.h>
int main ()
{
    int a,b,c;b=1,c=0;
    printf("enter any number\n");//input is taken 
    scanf("%d",&a);
    for(b=1;b<=a;b++)//until and unless the value of b=a the loop executes it required or expected performance with counter used as b++
    {
        c=c+b;
    }
    printf("the sum upto the entered number is %d\n",c);
    return 0;


}