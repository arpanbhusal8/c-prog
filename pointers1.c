#include <stdio.h>
int main()
{
    int *i, j;
    i = &j;
    scanf("%d", &j);
    printf("%d\n", j);
    printf("%u\n", &i);
    printf("%u\n",i);
    return 0;
}