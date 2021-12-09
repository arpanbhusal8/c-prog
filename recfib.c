#include <stdio.h>
int fib(int a);
int main()
{
    int a;
    printf("enter the number of terms you want the fibonacci sequence of\n");
    scanf("%d", &a);
    printf("%d ", fib(a));
    return 0;
}
int fib(int a)
{
    if (a<=1)
        return a;
    else
        return fib(a - 1) + fib(a - 2);
}