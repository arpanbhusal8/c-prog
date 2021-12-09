#include <stdio.h>
int fib (int a){
    if (a==1) return 0;
    else if(a==2) return 1;
    else return fib (a-1)+ fib(a-2);

}
int main (){
    int n;
    for (n=1;n<=10;n++){
        printf("%d\n",fib(n));

    }
    return 0;
}

    



