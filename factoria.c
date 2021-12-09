#include <stdio.h>
int main()
{
    int a, b = 1,d,e;
    scanf("%d", &a);
    d=1;
    while (d <= a)
    {
        b = b * a;
        a--;
    

    }
    printf("%d", b);
    return 0;
}