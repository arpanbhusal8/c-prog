#include<Stdio.h>
#include <String.h>
int main (){
    char name [100];
    printf("enter your name please\n");
    gets(name);
    int c= strlen(name);//includes the space as well
    printf("the number of characters in your name is %d\n",c);
    printf("your name is %s",name);
    return 0;
    
}