#include <stdio.h>
typedef struct bank {
    int ano;
    float blc;
    char name[100];
}bnk;
int main(){
bnk a[3];
for(int i=0;i<3;i++){
    printf("enter your account number \n");
    scanf("%d",&a[i].ano);
    printf("enter your account balance \n");
    scanf("%f",&a[i].blc);
    fflush(stdin);
    printf("enter your account name \n");
    gets(a[i].name);}
    for(int i=0;i<3;i++){
        printf("%d 0.2%f %s\n", a[i].ano,a[i].blc,a[i].name);
    }
    return 0;
}