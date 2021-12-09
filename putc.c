#include <Stdio.h>
int main (){
    FILE *ptr;
    ptr=fopen("generated.txt","w");
    putc('a',ptr);
    return 0;
}