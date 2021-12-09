#include <stdio.h>
typedef struct store
{
    int code;
    char name[100];
} st;
int comp(st v[2])
{
    int c = 0;
    if (v[0].code > v[1].code)
    {
        c++;
    }
    else
        c = 0;
}
int main()
{
    int d;
    st v[2];
    for (int i = 0; i < 2; i++)
    {
        gets(v[i].name);
        fflush(stdin);
        scanf("%d", &v[i].code);
        fflush(stdin);
    }
    d = comp(v);
    if (d == 1)
        printf("%s has a more senior and well paid job than %s\n", v[0].name, v[1].name);
    else

        printf("%s has a more senior and well paid job than %s\n", v[1].name, v[0].name);
    return 0;
}