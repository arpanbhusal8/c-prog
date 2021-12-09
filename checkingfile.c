#include<Stdio.h>
int main(){
    FILE *ptr;
    int num;
    ptr=fopen("number.txt","r");
    if(ptr==NULL){
        printf("the file doesnt exist\n");}
        else{
            fscanf(ptr,"%d",&num);
            printf("the number in the file is %d\n",num);
            fclose(ptr);

        }
        return 0;
    }

