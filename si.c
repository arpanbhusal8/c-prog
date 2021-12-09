#include <stdio.h>
int main()
{
    float a,b,c;
    printf("enter the given principal a\n");
    scanf("%f",&a);
    printf("enter the given rate of interest b\n");
    scanf("%f",&b);
    printf("enter the given time period c\n");
    scanf ("%f",&c);
    float SI=a*b*c*0.01;
    printf("the simple interest given by the bank =%f\n",SI);
    return 0;

}
