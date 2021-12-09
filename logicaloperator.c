#include <stdio.h>
int main ()
{
    int age;
    int vippass=1;
    printf("enter your age\n");
    scanf("%d",&age);
    if ((age>=18 && age <= 70) || !(vippass==1)){
        printf("you can have a driving license\n");
    }
    else {
        printf("you cannot drive\n");
    }
}