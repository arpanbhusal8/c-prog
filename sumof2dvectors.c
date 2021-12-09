#include <Stdio.h>
typedef struct sumvector{
    int a,b;}sum;
int main (){
    sum e1,e2;
    printf("enter x component of a vector \n");
    scanf("%d",&e1.a);
    printf("enter y component of a vector \n");
    scanf("%d",&e1.b);
    
    printf("enter x component of a vector \n");
    scanf("%d",&e2.a);
    printf("enter y component of a vector \n");
    scanf("%d",&e2.b);
printf(" the sum is ( %d %d )",e1.a+e2.a,e1.b+e2.b);
return 0;
}
