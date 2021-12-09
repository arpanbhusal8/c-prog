#include <stdio.h>
#include<String.h>
int main (){
    char *a= "arpan bhusal";
    char *b = "arpana bhusal";
    int c=strcmp(a,b);
    printf("the value is %d\n",c);
    return 0;
}