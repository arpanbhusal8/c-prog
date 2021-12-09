#include <stdio.h>
float avg(int *a, int *b)
{
    float d;
    d = (float)((*a) + (*b)) / 2;
    return d;
}
int main()
{
    int a, b;
    float c;
    printf("enter the numbers you want average of \n");
    scanf("%d %d", &a, &b);
    c = avg(&a, &b);
    printf("the average is %f\n", c);

    return 0;
}