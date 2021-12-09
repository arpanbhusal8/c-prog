#include<stdio.h>
int fib(int n);
int main (){
    int n,i;
    printf("type the number of terms of fibonacci series you want to display on the screen \n");
    scanf("%d",&n);
    printf("the fib series is \n");
    for (i=1;i<=n;i++){
        
        printf("%d\n",fib(i));
    }

    return 0;

}
int fib (int n){
    if (n==1)
    return 0;
    else if (n==2)
    return 1;
    else
    return fib(n-1) + fib(n-2);
}