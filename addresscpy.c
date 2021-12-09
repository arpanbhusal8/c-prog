#include <stdio.h>
void add(int *a)
{
    *a = (*a) * 10;
}

int main()
{
    int a = 10;
    add(&a);
    printf("%d\n", a);

    return 0;
}