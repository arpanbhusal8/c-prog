#include <stdio.h>
#include <math.h>
int arm (int a,int b);
int main ()
{
    int a;
    int b;
    printf("enter any number you want \n");
    scanf("%d",&a);
    int j=a;
    for (b=0;j!=0;b++)
    {
    j=j/10;
    }
    if (a==arm(a,b))
    printf("your numeber is armstrong");
    else 
    printf("your number is not armstrong");
    return 0;
}
int arm (int a,int b)
{
    int d;
    if (a==0)
    return 0;
    else if (a==1)
    return 1;
    else{ 
        d=a%10;
        return pow(d,b)+arm(a/10,b);

    }
        }
    
