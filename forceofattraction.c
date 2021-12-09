#include <stdio.h>
float gravitational(float a);
int main (){
    float a;
    printf("enter the mass of the object\n");
    scanf("%f",&a);
    printf("the gravitational pull of the object by the earth is %f\n",gravitational(a));
return 0;
}
float gravitational(float a){
    float b;
    float d;
    b=9.8;
    d=9.8*a;
    return d;

}