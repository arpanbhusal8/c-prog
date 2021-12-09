#include <stdio.h>
int main()
{
    int n;
    int d;
    
    printf("type the number of stars you want to input\n");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= n - i; j++)
        {
            printf(" ");
        }
        for (int k = n - i; k <= n; k++)
        {
            printf("*");
            printf(" ");
        }
        printf("\n");
    }


     for (int i = n; i > 0; i--)
    {
        for (int j = n; j >= i-1; j--)
        {
            printf(" ");
        }
        for (int k = i - 1; k >=0; k--)
        {
            printf("*");
            printf(" ");
        }
        printf("\n");
    }




    return 0;
}