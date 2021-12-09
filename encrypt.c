#include <stdio.h>
#include <string.h>
int main()
{
    char a[100];
    gets(a);
    char b[100], c[100];
    puts(a);
    for (int i = 0; i < strlen(a); i++)
    {
        b[i] = a[i] + 65;
    }
    b[strlen(a)] = '\0';
    printf("the encrypted message is \n ");
    puts(b);

    //for decrptying
    for (int i = 0; i < strlen(a); i++)
    {
        c[i] = b[i] - 65;
    }
    c[strlen(a)] = '\0';
    printf("the decrypted message is \n");
    puts(c);
    return 0;
}