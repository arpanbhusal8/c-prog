#include <Stdio.h>
void strcpy1(char a []);
int main (){
    char a[100];
    printf("enter any your name so that you want to change it in future \n");
    scanf("%s",&a);
    strcpy1(&a);
    
    return 0;

}
void strcpy1 (char a[]){
  
    int i=0;
    char b[100]="rita";
    while (a[i]!='\0'){
       a[i]=b[i];
        i++;

    }
    printf("the changed name is %s\n",a[100]);

}