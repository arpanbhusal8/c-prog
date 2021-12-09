#include <Stdio.h>
int tab(int a,int b);
int main () {
int a,b=1;
   printf("enter any number \n");
    scanf("%d",&a);
    tab(a,b);
    
    return 0;
}
int tab(int a,int b){
     if (b==10){
        printf("%d x %d =%d\n",b,a,b*a );
        return b;
    }
    else 
    printf("%d x %d =%d\n",b,a,b*a);
    return tab(a,b+1);
}
