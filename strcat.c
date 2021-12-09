#include<Stdio.h>
#include <String.h>
int main (){
    char name [100];
    printf("enter your name please\n");
    gets(name);
    char *name2= " who  is better than messi ";//  '*' is important while declaring because without it strcat will not perform
    strcat(name,name2);
    printf("your name is %s",name);
    return 0;
}