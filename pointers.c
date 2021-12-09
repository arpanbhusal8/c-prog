#include <stdio.h>
int main(){
int i=11;
int *j=&i;
int **k=&j;
printf("%u\n",&i);
printf("%u\n",j);
printf("%u\n",k);
return 0;}