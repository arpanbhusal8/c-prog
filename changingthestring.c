#include<Stdio.h>
int main (){
    char *name ;
    printf("enter your name please\n");
    gets(name);
    printf("your name is %s\n",name); 
    printf("enter the name that you want to change your name to please\n");
    gets(name);
    printf("your  name now  is %s\n",name);
    

    return 0;
    /*note that you cann0t change the string using  char name[] 
    as declaration specifier but when you use char *name 
    you can change its value later and you can use it as an intializer */

}