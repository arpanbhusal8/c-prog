#include <Stdio.h>
typedef struct code{
    int cod;

}code;
int main (){
    code e1;
    code *ptr;
    ptr=&e1;
    ptr->cod=111;
    printf("the code of employee e1 at arpan.co is %d \n",e1.cod);
    return 0;
}