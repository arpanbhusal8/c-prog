#include <stdio.h>
int main ()
{
    char a;
    printf("enter any character\n");
    scanf("%c",&a);
    (a>=97 && a<=122)?printf("this is lower case characteror alphabet"): printf("this is not a lowercase alphabet");
    return 0;
}