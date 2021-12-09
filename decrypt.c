#include <Stdio.h>
void decrypt(char *a);
int main (){
    char a []="sjdlz!ujdlz!ubdlz!upf";
    decrypt (a);
    printf("the encrypted message is %s\n",a);
    
    return 0;
}
void decrypt (char *a){
    char *ptr=a;
    while (*ptr!='\0'){
        *ptr=*ptr-1;
        ptr++;

    }
    
}