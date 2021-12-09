#include <Stdio.h>
struct employee{
    int code;};
    int main (){
        struct employee e1;
        struct employee *ptr;
        ptr=&e1;
        printf("type your arpan .co code ");
        scanf("%d",&e1.code);
        printf("the code you have entered is %d",(*ptr).code);
    
    return 0;}

