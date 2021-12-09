#include <stdio.h>
void mul(int a);
int main (){
    int a=20;
    mul(a);
    printf("the value of a times 10 is %d\n",a);
    return 0;
}

    void mul (int a){
        a=a*10;

    }
