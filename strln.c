#include<Stdio.h>
int strlen(char *a);
int main(){
    char a[200]="Any shit you want you fucktard you fucking retard fuck and fuck off to mirzapur";
    strlen(a);
    printf("The total number of characters is %d\n",strlen(a));
    return 0;
}
int strlen(char *a){
    int i=0;
    while (a[i]!='\0'){
       i++; 
    }
    return i;
}