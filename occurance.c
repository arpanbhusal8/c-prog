#include <stdio.h>
int count(char *a);
int main (){
    char a[]="arpan bhusal";
    char c='a';
    printf("the total number of %c in the name is %d\n",c,count(a));
    return 0;

}
int count(char *a){
    int d=0;
    char *ptr=a;
    while(*ptr!='\0'){
        if (*ptr=='a'){
            d++;
            

        }
        ptr++;
    }
    return d;
}