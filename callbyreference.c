#include <stdio.h>
void swap (int *a,int *b);
int main (){
    int a=4,b=3;
    printf("the value of a and b before calling the function is %d ,%d \n",a,b);
    swap (&a,&b);
    printf ("the value of a and b after calling the function is %d ,%d \n",a,b);
    return 0;
}
void swap ( int *a, int *b){
  int temp ;
    temp = *a;
    *a=*b;
    *b= temp;

}