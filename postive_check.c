#include <stdio.h>
int check(int a[3])
{
    int b = 0;
    for (int i = 0; i < 5; i++)
    {
        if (a[i] > 0)
        {
            b++;
            continue;
        }
    }
    return b;
}

int main()
{
    int a[5], c;
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%d", a[i]);
    }
    c = check(a);
    printf("the total number of postive number in an array is %d\n", c);

    return 0;
}