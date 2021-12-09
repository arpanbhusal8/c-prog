#include<stdio.h>
int main () 
{
    int a;
    printf("enter the rating (1-5)\n");
    scanf("%d",&a);
    switch(a){
        case 1:
        printf("your restaurant rating is 1\n");
        break;
        case 2:
        printf("your restaurant rating is 2\n");
        break;
        case 3:
        printf("your restaurant rating is 3\n");
        break;
        case 4:
        printf("your restaurant rating is 4\n");
        break;
        case 5:
        printf("your restaurant rating is 5\n");
        break;
        default:
        printf("your rating is invalid\n");
        break;


    }
    return 0;
}