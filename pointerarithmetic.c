#include <stdio.h>
int main (){
    int a=32;
    int *b=&a;
    printf("the address value is %u\n",b);
    b++;
    printf("the address value after pointer addition is %u\n",b);
    return 0;

}