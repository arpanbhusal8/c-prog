#include <stdio.h>
float area(float a, float b)
{
    return a * b;
}
int main()
{
    float a, b;
    printf("enter the length and breadth of a parallelogram \n");
    scanf("%f %f", &a, &b);
    printf("the area is %f\n", area(a, b));

    return 0;
}