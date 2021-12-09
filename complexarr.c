#include <stdio.h>
struct complex{
    int a,b;
};
void display (struct complex c[5]){
    for(int i=0;i<5;i++)
    printf("%d +%di\n", c[i].a, c[i].b);
    
}
int main(){
    struct complex c[5];
    for(int i=0;i<5;i++){
        printf("enter the real number present in the complex number\n");

    scanf("%d", &c[i].a);
    printf("enter the imaginary number present in the complex number\n");
    scanf("%d", &c[i].b);
    }
display(&c);
return 0;}