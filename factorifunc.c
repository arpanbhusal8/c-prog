#include <stdio.h>
int fact(int a)
{
    if (a == 1 || a == 0)
    return 1;
    else
        return (a * fact(a - 1));
}
int main()
{
    int a, c;
    printf("enter the number you want factorial of \n");
    scanf("%d", &a);
    c = fact(a);
    printf("the factorial of the input number is %d \n", c);

    return 0;
}