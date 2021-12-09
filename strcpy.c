#include<Stdio.h>
#include<string.h>
int main (){
    char name [100];
    printf("enter your name please\n");
    gets(name);
    char *nametoo="shawn koshy"; /*better to use "char nametoo[100]"" than the one used here
                                 cause syntax of strcpy is 
                                 strcpy(source of target orname to be changed,source of name that is used to chang the target)*/
    strcpy(name,nametoo);
    printf("your name is %s",name);
    return 0;
}