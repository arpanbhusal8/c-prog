#include <stdio.h>
int main ()
{
    int a;
    int b=1;
    int c=0;
    int d;
    printf("enter any number\n");
    scanf("%d",&a);
    for(b=1;b<=a;b++)
    {
        d=a%b;
        if(d==0)
        c++;
        
    }
    if (c<=2)
        printf("the number is prime\n");

    else 
        printf("the number is composite\n");

return 0;
}