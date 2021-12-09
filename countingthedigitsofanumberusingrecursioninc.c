#include <stdio.h>
int count (int a);
int main (){
    int a,b;
    printf("enter any number you like \n");
    scanf("%d",&a);
    b= count(a);
    printf("the total number of digis in the given number is %d\n",b);
    return 0;
}
int count (int a){
   static int b=0;
    if (a==0){
        return 0;}
        else 
        b++;
        return count (a/10);
    } 
