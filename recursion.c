#include <stdio.h>
int factorial (int a);
int main () {
    int a;
    printf("enter any number you wish \n");
    scanf ("%d",&a);
    printf ("the factorial of %d is %d\n",a,factorial(a));
    
    return 0;
}
int factorial (int a){
    printf("how recursions work (%d)\n",a);
    if (a==1 || a==0) {
        return 1;
    }
    else 
    return a*factorial (a-1);
}