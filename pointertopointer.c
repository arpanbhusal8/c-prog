#include <stdio.h>
int main (){
    int i=9098;
    int *j;
    j=&i;
    int **k;
    k=&j;
printf("the value of i =%d\n",**k);
return 0;
}