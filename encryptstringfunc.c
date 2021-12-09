#include <stdio.h>
#include <string.h>
void encrypt(char *b, int c)
{
    int i = 0;
    for (i = 0; i < strlen(b); i++)
    {
        b[i] = b[i] - 65;
    }
    b[i] = '\0';
    puts(b);
}
int main()
{
    char a[100];
    int c;
    printf("enter a string\n");
    gets(a);
    c = strlen(a);
    char b[100];
    puts(a);
    for (int i = 0; i < strlen(a); i++)
    {
        b[i] = a[i] + 65;
    }
    b[strlen(a)] = '\0';
    puts(b);

    encrypt(b, c);

    return 0;
}