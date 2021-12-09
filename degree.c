#include <stdio.h>
int main ()
{
    float c;
    printf("enter the temperature in celcius c\n");
    scanf("%f",&c);
    float fahrenhite=((c*9/5)+32);
    printf ("the temperature in fahrenhite =%f\n",fahrenhite);
    return 0;


}