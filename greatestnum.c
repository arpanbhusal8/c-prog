#include <stdio.h>
int main (){
    int a,b,c;
    printf("enter any number \n");
    scanf("%d",&a);
    
    printf("enter any number \n");
    scanf("%d",&b);
    
    printf("enter any number \n");
    scanf("%d",&c);
    if (a>b && a>c){
        printf("the greatest number is a\n");
    }
    else if (b>a && b>c){
        printf("the greatest number is b\n");
    }
    else if (c>a && c>b){
        printf("the greatest number is c \n");
    }
    return 0;
}
