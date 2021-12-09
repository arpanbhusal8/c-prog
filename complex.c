#include <stdio.h>
typedef struct complex
{
    int real, img;
} cmp;
void display(cmp c1, cmp c2)
{
    printf("%d +%di\n", c1.real, c1.img);
    printf("%d +%di\n", c2.real, c2.img);
}
int main()
{
    cmp c1, c2;
    printf("enter the real number present in the complex number\n");

    scanf("%d", &c1.real);
    printf("enter the imaginary number present in the complex number\n");
    scanf("%d", &c1.img);

    printf("enter the real number present in the complex number\n");
    scanf("%d", &c2.real);

    printf("enter the imaginary number present in the complex number\n");
    scanf("%d", &c2.img);
    display(c1, c2);
    return 0;
}