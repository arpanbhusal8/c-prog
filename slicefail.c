#include <stdio.h>
#include <string.h>
void slice(char a[], int n,int m);
int main(){
    int n,m;
    char a[100];
    printf("enter the string you want sliced\n");
    gets(a);
    printf("enter the start and end of slicing points for a string \n");
    scanf("%d %d",&n,&m);
    
    slice(a,n,m);
    printf("the sliced shit is %s ",a);
    return 0;

}
void slice (char a[], int n , int m){
    int i=0;
    while ((m+i)<n){
   a[i]=a[m+i];
   i++;
    }
    a[i]= '\0';
    }
