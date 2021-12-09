#include <stdio.h>
int main (){
    int i;
    printf("enter any value of your choice \n");
    scanf("%d",&i);
    int *j;
    j=&i;
    printf ("Address of i=%d\n",&i);
    printf("Address of i=%u\n",j);
    printf("address of j =%d\n",&j);
    printf ("value of i is %d\n",i);
    printf("value of i=%d\n",*&i);
    printf ("value of i =%d\n",*j);
    return 0;
}