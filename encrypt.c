#include <Stdio.h>
void encrypt(char *a);
int main (){
    char a []="ricky ticky tacky toe";
    encrypt (a);
    printf("the encrypted message is %s\n",a);
    
    return 0;
}
void encrypt (char *a){
    char *ptr=a;
    while (*ptr!='\0'){
        *ptr=*ptr+1;
        ptr++;

    }
    
}