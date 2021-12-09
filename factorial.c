#include <stdio.h>
int main()
{
    int n, d=1;
    scanf("%d", &n);
    for (int i = 1; i <=n; i++)
    {
        d = d * i;
    }
    printf("%d", d);
    return 0;
}