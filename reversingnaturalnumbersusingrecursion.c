#include <Stdio.h>
int rev(int a);
int main (){
    int a,c;
       printf("enter any number \n");
    scanf("%d",&a);
    c= rev(a);
    printf("theirsum is %d\n",c);
    return 0;
}
int rev(int a){
    if(a==1)
    return 1;
    else 
    printf("%d\n",a);
    return a+ rev(a-1);
}