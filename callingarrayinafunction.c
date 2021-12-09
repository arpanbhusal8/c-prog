#include <Stdio.h>
void prt(int *ptr);
int main (){
    int arr [7]={1,2,3,34,45,56,2345};
    prt (arr);
    return 0;
}
void prt (int *ptr){
    for (int i=0;i<7;i++){
        printf ("the value of arr[%d]= %d\n",i,*ptr);
        ptr++;
    }
}