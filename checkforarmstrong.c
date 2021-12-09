#include <stdio.h>
#include <math.h>
int arms (int a)
{
    int c = 0;
    int e = a;
    while (e != 0)
    {
        e = e / 10;
        c++;
    }
    return c;
}
int arm (int b)
{
    int d = 0;
    int f = b;
    while (f != 0)
    {
        f = f / 10;
        d++;
    }
    return d;
}
int main()
{
    int a, b, i, k = 0, l, m;
    float j;
    printf("enter any number \n");
    scanf("%d", &a);
    printf("enter any number \n");
    scanf("%d", &b);
    l = a;
    m = b;
    for (a = a; a <= b; a++)
    {
        if (arms(a) < arm(b))
        {
            while (l != 0)
            {
                i = l % 10;
                j = pow(i, arms(a));
                k = k + j;
                l = l / 10;
            }
        }
        else
        {
            while (m != 0)
            {
                i = m % 10;
                j = j + pow(i, arms(b));
                k = k + j;
                m = m / 10;
            }
        }

        if (a = k)
        {
            printf("the armstrong of %f type of variable is %d\n", pow(10, arms(a)-1), k);
        }
        else if (b = k)
        {
            printf("the armstrong of %f type of variable is %d\n", pow(10, arm(b)-1),k);
        }
    }
    return 0;
}
