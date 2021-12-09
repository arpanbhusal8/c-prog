#include <Stdio.h>
int main (){
    int marks[4];
    int *ptr=&marks[4];
    for (int i=0;i<4;i++){
        printf("enter the marks of the %d th student: \n",i+1);
        scanf("%d",ptr);
        ptr++;
    }
    for (int i=0;i<4;i++){
        printf("the marks of the %d th student is %d \n",i+1,marks[i]);
        
    }
    return 0;
}