#include <stdio.h>
struct arpan {
    int code;
    char name [100];
};
int main (){
    struct arpan e1;
    struct arpan *ptr;
 ptr=&e1;
 ptr->code=101;
 printf("the code is %d\n",e1.code);
return 0;
}

