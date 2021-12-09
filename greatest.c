#include <stdio.h>
int main()
{
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    if (a >= b && a >= c && a >= d)
    {
        printf("%d\n", a);
    
    }

    else if (d >= b && d >= c && d >= a)
    {
        printf("%d\n", d);
    
    }

    else if (c >= b && c >= a && c >= d)
    {
        printf("%d\n", c);
    
    }

    else if (b >= a && b >= c && b >= d)
    {
        printf("%d\n", b);
    
    }
    return 0;
}