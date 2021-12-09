#include <stdio.h>
int main (){
    int marks[5];
    int *ptr;
    ptr = &marks[0];
    for (int i=0;i<5;i++){
        printf("enter the marks of %d th student ; \n",i+1);
        scanf("%d",ptr);
        ptr ++;
    }
    for (int i=0;i<5;i++){
        printf("the marks obtained by %d th student is %d :\n",i+1,marks[i]);

    }
    return 0;

}