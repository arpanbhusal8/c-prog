#include <stdio.h>
int main()
{
    int a, b=0;
    scanf("%d", &a);
    for (int i = 1; i <= a; i++)
    {
        if ((a % i )== 0)
            b++;
    }
    if (b > 2)
        printf("it is composite\n");
    else
        printf("it is prime \n");
    return 0;
}