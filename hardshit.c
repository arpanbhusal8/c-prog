#include <Stdio.h>
int main (){
    int a;
    printf("how many stars you want?\n");
    scanf("%d",&a);
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<(i+1);j++)
        {
            if (j>=(a-(i-1)) && j<=(a +(i-1)))
            {
                printf("*");
            }
            else printf(" ");}

        printf("\n");
    }
    return 0;
}