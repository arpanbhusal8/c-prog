#include <stdio.h>
#include <string.h>
struct employee {
        int code ;
        float salary;
        char name [10];   
    };
int main (){    
    struct employee e1;
    
        printf("type your id code of arpan.co ");
        scanf("%d",&e1.code);
        printf("enter your salary ");
        scanf("%f",&e1.salary);

        printf("enter your name ");
        gets(e1.name);
        
        
        

        return 0;
      
        


}