#include <stdio.h>
 void mul(int *a);
 int main (){
     int a=32;
     mul(&a);
     printf("the value of a time 10 =%d\n",a);
     return 0;
 }
 void mul(int *a){
     *a=*a*10;
 }
