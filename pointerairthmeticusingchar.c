#include<Stdio.h>
int main (){
char a='a';
char *b=&a;
printf("the address value is %u\n",b);
b++;
printf("the adddress value is %u\n",b);
return 0;
}