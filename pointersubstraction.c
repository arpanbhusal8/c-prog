#include <stdio.h>
int main (){
    int a,b;
    int *c,*d;
    printf ("enter any number you wish \n");
    scanf("%d",&a);
      printf ("enter any number you wish \n");
    scanf("%d",&b);
    c=&a;
    d=&b;
    int e;
    e=c-d;
    printf("the difference between the two pointers are %d\n",e);
    return 0;
    
}