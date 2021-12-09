#include <Stdio.h>
float average (float a,float b ,float c);
int main (){
    float b;
    float c;
    float a;
    printf("enter any number\n");
    scanf("%f",&a);
    printf("enter any number\n");
    scanf("%f",&b);
    printf("enter any number\n");
    scanf("%f",&c);
    printf("the average of the three numbers that have been inputed is %f\n",average(a,b,c));
    return 0;
}
float average (float a,float b, float c){
    float d;
    float e;
    e=a+b+c;
    d=e/3;
    return d;
}