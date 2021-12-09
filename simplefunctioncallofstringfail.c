#include <Stdio.h>
void arpan(char a[]);
int main (){
    char a[100];
    printf("what is your name ?\n");
    gets(a);
    arpan (a);
    printf("your new name is %s\n",a);
    return 0;

}
void arpan(char a[]){
    int i=0;
    char c[100];
    while (c!='\0'){
     a[i]=c[i];
        i++;
    }
printf("the name still fucking is %s",a[100]);
}
