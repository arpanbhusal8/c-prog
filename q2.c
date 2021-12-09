#include <stdio.h>
int main ()
{
int a,b,c;
printf ("enter your marks in maths out of 100\n");
scanf("%d",&a);

printf ("enter your marks in physics out of 100\n");
scanf("%d",&b);

printf ("enter your marks in chemistry out of 100\n");
scanf("%d",&c);
int d; d=a+b+c;
int e; e=d/3;
if (e>=40 && a>=33 && b>=33 && c>=33){
    printf ("you have passed as a whole and in all subjects with percentage %d\n",e );
}
else {
    printf("you have failed with percentage %d\n",e);
}
return 0;
}
