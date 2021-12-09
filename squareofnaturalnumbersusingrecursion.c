#include <Stdio.h>
int sqr (int a, int b);
int main (){
    int a,b=1;
       printf("enter any number \n");
    scanf("%d",&a);
    sqr( a,b);
    return 0;
}
int sqr (int a, int b){
    if (b==a){
        printf("%d\n",b*b);
    return a;}
    else 
    printf ("%d\n",b*b);
    return   sqr(a,b+1);
}