#include <stdio.h>
int main ()
{
    float c,d;
    float pi=3.141592654;
    
    printf("enter the radius of the circlular base of the cylinder c\n");
    scanf("%f",&c);
    printf("the height of the given circular base cylinder is d\n ");
    scanf ("%f",&d);
    float area=pi*(c*c);
    float volume= pi*(c*c)*d;
    printf("area of the circlular base only =%f\n",area);
    printf("the volume of the given cylinder =%f\n",volume);
    return 0;


    

}