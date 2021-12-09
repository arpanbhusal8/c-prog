#include <stdio.h>
#include <math.h>
int main (){
    float x,y,a,b,c,d;
    printf ("enter the value of a x cordinate\n");
    scanf("%f",&x);
    printf ("enter the value of a y cordinate\n");
    scanf("%f",&y);
    printf ("enter the value of a x1 cordinate\n");
    scanf("%f",&a);
    printf ("enter the value of a y1 cordinate\n");
    scanf("%f",&b);
c=pow(x-a,2) +pow(y-b,2);
d=sqrt(c);
printf("the distance between two inputed points is %f\n",d);
return 0;
}