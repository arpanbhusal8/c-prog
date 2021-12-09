#include <stdio.h>
typedef struct acc
{
    int id;
    char name[100];
    float amount;
} bnk;
int main()
{
    bnk a1;
    printf("enter your name\n");
    gets(a1.name);

    fflush(stdin);
    printf("enter your account id\n");
    scanf("%d", &a1.id);

    printf("enter your salary \n");
    scanf("%f", &a1.amount);
    printf("the account holders information is %d %s %0.3f", a1.id, a1.name, a1.amount);

    return 0;
}