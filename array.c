#include <stdio.h>
int main(){
int a[10];
int *b=a;
for(int i=0;i<10;i++)
a[i]=i+1;
printf("the third element of the array is %d\n",a[2]);
printf("the third element of the array is %d\n",*(b+2));
return 0;}