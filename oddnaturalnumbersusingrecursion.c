#include <stdio.h>
int odd(int a,int b);
int main (){
    int a,b=1;
       printf("enter any number \n");
    scanf("%d",&a);
    odd(a,b);
    return 0;
}
int odd(int a,int b){
if (b==a)
{printf("%d\n",b); return a;}
else 
printf("%d\n",b);
return odd(a,b+2);
}