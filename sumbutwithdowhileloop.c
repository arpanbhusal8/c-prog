#include <Stdio.h>
int main ()
{
    int a,b,c;b=1,c=0;
    printf("enter any number\n");
    scanf("%d",&a);
    do
    {
    c=c+b;
    b++;
    } while (b<=a);
    printf("the sum upto n numbers is %d\n",c);
    return 0;
    
    

}