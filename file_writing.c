#include <Stdio.h>
int main (){
    FILE *ptr;
    ptr=fopen("arpan.txt","w");
    int num=4564646;
    fprintf(ptr,"the number in the file is %d\n",num);
    fclose(ptr);
    return 0;

}