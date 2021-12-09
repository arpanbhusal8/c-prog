#include <Stdio.h>
#include <String.h>
struct tesla {
    int code;
    float salary;
    char name [100];
};
int main (){
    int i=0;
    
    for(i=0;i<5;i++){
        struct tesla employee[5];
        printf("enter your tesla id code ");
        scanf("%d",& employee[i].code);
        printf("enter your salary at tesla co. " );
        scanf("%f",&employee[i].salary);
        fflush(stdin);
        printf("enter your name : ");
        gets(employee[i].name);
    }
    
    for(int j=0;j<5;j++){
        struct tesla employee [5];
        printf("%d %f %s\n", employee[j].code,employee[j].salary,employee[j].name);

    }
    return 0;
}