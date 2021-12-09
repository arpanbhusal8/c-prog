#include<Stdio.h>//gets should be used to use puts what puts does is it prints the string inputed.
int main (){
    char name [100];
    printf("enter your name please\n");
    gets(name);//
    puts(name);
   // printf("your name is %s",name);
    return 0;
}