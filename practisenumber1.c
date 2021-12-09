#include <Stdio.h>
int main (){
    int a=32;
    int *b;
    b=&a;
    printf ("the value of a is %d\n",*b);
    printf ("the address of a is %u\n",b);
    printf("the address of b is %d\n",&b);
    return 0;
}