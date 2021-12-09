#include <Stdio.h>
void pst(char *a);
int main (){
char a[100];
printf("enter your name\n");
gets(a);
pst(a);
return 0;
}
void pst (char *a){
    char b;
    int i=0,c=0;
    printf("enter any character you want to check \n");
    scanf("%c",&b);
    while(a[i]!='\0'){
        if (a[i]==b){
            c++;
        }
        i++;
    } if(c!=0)
    printf("it occurs %d times\n ",c);
    else 
    printf("it doesnt occur at all\n");
    return 0;

}