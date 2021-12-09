#include <Stdio.h>
typedef struct vector{
    int a,b;} vec;
    int main (){
        vec com;
        printf("enter the x-component of 2d vector \n");
        scanf("%d",&com.a);
        printf("enter the x-component of 2d vector \n");
        scanf("%d",&com.b);
        printf("( %d %d )\n",com.a,com.b);
        return 0;
}