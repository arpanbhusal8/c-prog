#include <Stdio.h>
#include <String.h>
struct content
{
    int code;
    float salary;
    char name[100];
};

void show(struct content e1);

int main()
{
    struct content e1;
    printf("enter your arpan.co id \n");
    scanf("%d", &e1.code);
    printf("Enter your salary at arpan.cp \n");
    scanf("%f", &e1.salary);
    fflush(stdin);
    printf("enter your name \n");
    gets(e1.name);
    show(e1);
    return 0;
}
void show(struct content e1)
{
    printf("%d %f %s", e1.code, e1.salary, e1.name);
}