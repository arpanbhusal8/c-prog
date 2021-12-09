#include <stdio.h>
int rev(int a);
int main (){
    int a;
       printf("enter any odd number \n");
    scanf("%d",&a);
    rev (a);
    return 0;

}
int rev(int a){
    if (a==1){
    printf("%d\n",a);
    return 1;
    }
    else 
    printf("%d\n",a);
    return rev(a-2);
}