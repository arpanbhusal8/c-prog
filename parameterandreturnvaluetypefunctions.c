#include <Stdio.h>
int sum (int a, int b);
int main (){
    
    int c;
    int a,b;
    printf("enter any number\n");
    scanf("%d",&a);
    printf("enter any number\n");
    scanf("%d",&b);
    c= sum(a,b);
    printf("the sum of the inputed numbers is %d\n",c);
    return 0;

}
int sum(int a,int b){
    int d;
    d=a+b;
    return d;
    
}