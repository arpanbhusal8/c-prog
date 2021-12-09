#include <stdio.h>
int main (){
    int mul [10]={1,2,3,4,5,6,7,8,9,10};
    int n;
    printf("enter any number \n");
    scanf("%d",&n);

    for (int i=0;i<10;i++){
        printf(" %d x %d = %d\n",n,mul[i],n*mul[i]);
    }
    return 0;
}