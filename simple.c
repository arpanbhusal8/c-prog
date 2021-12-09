#include <Stdio.h>
#include <string.h>
struct employee {
    char name [100];
    int code;
    float salary;};
int main (){
    struct employee e1,e2,e3;
     printf("type your id code of arpan.co ");
        scanf("%d",&e1.code);
        printf("enter your salary ");
        scanf("%f",&e1.salary);
        fflush(stdin);
        printf("enter your name ");
        gets(e1.name);

      printf("type your id code of arpan.co ");
        scanf("%d",&e2.code);
        printf("enter your salary ");
        scanf("%f",&e2.salary);
        fflush(stdin);
        printf("enter your name ");
        gets(e2.name);
      
        printf("type your id code of arpan.co ");
        scanf("%d",&e3.code);
        printf("enter your salary ");
        scanf("%f",&e3.salary);
        fflush(stdin);
        printf("enter your name ");
        gets(e3.name);

        printf("%d %f %s\n",e1.code ,e1.salary,e1.name);
        printf("%d %f %s\n",e2.code ,e2.salary,e2.name);
        printf("%d %f %s\n",e3.code ,e3.salary,e3.name);
   
    return 0;
}