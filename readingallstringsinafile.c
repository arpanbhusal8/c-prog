#include <stdio.h>
int main (){
    FILE *ptr;
    char txt;
    ptr=fopen("sample.txt","r");
 txt=fgetc(ptr);
 while(txt !=EOF){
 printf("%c",txt);
  txt =fgetc(ptr);}
  fclose(ptr);
   
    return 0;
}