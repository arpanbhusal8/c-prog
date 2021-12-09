#include <stdio.h>
int main (){
    int a=32;
    int *b=&a;
    int *c=&a;
    if (b==c)
    printf ("Same address");
    else 
    printf("fuck off");
    return 0;
}