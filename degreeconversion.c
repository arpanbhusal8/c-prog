#include <stdio.h>
float celcius (float a);
int main (){
    float a;
    printf("enter the temperature in degree celcius\n");
    scanf("%f",&a);
    printf("the temperature in fahrenhite scale is %f\n",celcius(a));
    return 0;
}
float celcius (float a){
    float d;
    d= a*9/5+32;
    return d;
}