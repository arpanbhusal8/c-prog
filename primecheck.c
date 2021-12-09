#include <stdio.h>
int main ()
{
    int a,b,c,d;b=1,c=0;
    printf ("enter any number \n");
    scanf("%d",&a);
    do 
    {
    d=a%b;
    if (d==0)
    {
    c=c++;
    }
    b++;
    }while (b<=a);
    if (c>2)
    {
        printf("the number is composite\n");

    }
    else 
{
    printf("the numer is prime\n");
}
return 0;

}

