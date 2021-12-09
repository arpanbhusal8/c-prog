#include <stdio.h>
int main (){
    int a;
    int b=1;
    printf ("enter any number\n");
    scanf("%d",&a);
    do {
        printf("the value of natural numbers upto a is %d\n",b);
        b++;

    }while (a>=b);
    return 0; 
}