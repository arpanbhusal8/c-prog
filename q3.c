#include <stdio.h>
int main ()
{
    float a,b;
    printf("enter your annual income salary\n");
    scanf("%f",&a);
    if (a>=250000 && a<=500000){
        b=0.05*(a-250000);
        printf ("your income tax is %f\n",b);
    }
    else if (a>=500000 && a<=1000000){
        b=0.2*(a-500000);
        printf("your income tax is %f\n",b);
    }
    else if (a>1000000){
        b=(a-1000000)*0.3;
        printf("your income tax is by the end of this month is %f/n",b);
    }
    return 0;
}