#include <stdio.h>
int main (){
    int marks [5];
    int i;
    for (i=0;i<5;i++){
        printf("enter the marks obtained by student %d :\n",i+1);
        scanf("%d",&marks[i]);
        printf("the marks obtained by the student %d is %d \n",i+1,marks[i]);

    }
    return 0;
}