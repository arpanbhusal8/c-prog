#include <stdio.h>
int main ()
{
    int a,b,c;
    printf ("enter any years in ad\n");
    scanf("%d",&a);
    b=(a/100)%2;
    c=(a/400)%2;
    if (a%4==0 && c== 0 || b==0 )
    {
        printf("this year is a leap year\n");
    }
    else 
    {printf("this is not a leap year\n");
    }
    return 0;
}