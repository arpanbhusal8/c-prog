#include <stdio.h>
typedef struct imaginary{
    int real;
    char imagi[20];
}img;
int main (){
    img ;
    img a[5];
    for(int i=0;i<5;i++){
    printf("type your real number \n");
    scanf("%d",&a[i].real);
    fflush(stdin);
    printf("type your imaginary number \n");
    gets(a[i].imagi);
    }
   
    for(int i=0;i<5;i++){
         printf("your imaginary number is %d + %s \n",a[i].real,a[i].imagi);

    }
return 0;

}