#include <stdio.h>
typedef struct content{
    int code;
}
ctnt;
int main (){
    ctnt e1;
    printf("enter your arpan.co id code \n");
    scanf("%d",&e1.code);
    printf("your code is %d \n",e1.code);
    return 0;
}