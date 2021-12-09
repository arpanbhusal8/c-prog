#include <Stdio.h>
int nat(int a,int b);
int main (){
    int a,b=1;
       printf("enter any number \n");
    scanf("%d",&a);
    nat (a,b);
    return 0;

}
int nat(int a,int b){
    if (b==a){
    printf("%d\n",b);       
        return a;}
else
printf("%d\n",b);
    return b+ nat(a,b+1);
}