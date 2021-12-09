#include <stdio.h>
#include <string.h>
typedef struct point
{
    int code;
    char name[100];
} pt;
int main()
{
    pt e1;
    e1.code = 21;
    strcpy(e1.name, "harry");
    pt *p;
    p = &e1;
    printf("the code is %d\n", (*p).code);
    printf("the code is %d\n", e1.code);
    printf("the code is %d\n", p->code);

    return 0;
}