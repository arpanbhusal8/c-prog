#include<stdio.h>
int main (){
    char a;
    printf("enter a character \n");
    scanf("%c",&a);
    if(a>=65 &&a<=90)
    printf("it is uppercase letter \n");
    else if (a>=97 && a<=122)
    printf("it is lowercase character \n");
    return 0;
}