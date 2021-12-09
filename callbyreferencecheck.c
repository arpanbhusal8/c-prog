#include <stdio.h>
void add( int *a);
int main (){
    int a=32;
    printf("the value of a before function call  is %d\n",a);
    add(&a);
    printf("the value of a after function call is %d\n",a);
    return 0;

}
void add(int *a)
{
    *a=24;

}