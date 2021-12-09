#include<stdio.h>
int main (){
    char name[]="arpan bhusal";
    char *ptr=name;
    while (*ptr!= '\0'){
        printf("%c",*ptr);
        ptr++;
    }
return 0;
}