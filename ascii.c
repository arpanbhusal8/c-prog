#include <stdio.h>
int main(){
    char a;
    printf("enter any letter\n");
    scanf("%c",&a);
    if (a>=97 && a<=122){
        printf("your letter is a lower case number\n");}
        else if (a>=65 && a<=90){
            printf("your letter is an upper case number \n");
        }

    return 0;
}