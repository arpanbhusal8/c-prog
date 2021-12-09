#include <stdio.h>
#include <string.h>
int main()
{
    char a[100];
    char b[100];
    char c;
    int i = 0;
    printf("enter any string you want\n");
    scanf("%s", a);
    printf("enter another string character by character \n");
    while (c != '\n')
    {
        fflush(stdin);
        scanf("%c", &c);
        b[i] = c;
        i++;
    }
    b[i-1] = '\0'; //this part i dont understand
    printf("the first string is %s\n", a);
    printf("the second string is %s\n", b);
    printf("Strcmp of a and b is %d\n", strcmp(a, b));

    return 0;
}