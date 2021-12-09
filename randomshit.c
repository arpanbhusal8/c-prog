#include <Stdio.h>
void  call(int a);
int main(){
    int a=32;
    call(a);
    printf("the changed value of a is %d\n",a);
  
    return 0;
}
void  call(int a){
    int a= a*10;
   
    
}