#include <stdio.h>
typedef struct imaginary{
    int real;
    char imagi[20];
}img;
int main (){
    img a1;
    printf("type your real number \n");
    scanf("%d",&a1.real);
    fflush(stdin);
    printf("type your imaginary number \n");
    gets(a1.imagi);
    printf("your imaginary number is %d + %s \n",a1.real,a1.imagi);
    return 0;


}