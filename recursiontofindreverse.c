#include <stdio.h>
#include <math.h>
int rev (int a,int i);
int main (){
    int a;
    int i,j;
    printf("enter any number \n");
    scanf("%d",&a);
    for (i=1;j!=0;i++){
    j=j/10;
    }
    
    printf("the reverse of the input number is %d",rev(a,i));
    return 0; 
}
int rev (int a,int i){
int k;
k=a%10;
    if (i==1)
    return a;
    else
    return (k*pow(10,i-1) + rev(a/10,i-1));
}