#include <stdio.h>
int main () {
    int a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p;
    printf("enter the time in hours as first time input\n");
    scanf("%d",&a);
    printf("enter the time in minutes first time input\n");
    scanf("%d",&b);
    printf("enter the time in seconds first time input\n");
    scanf("%d",&c);
    printf("enter the time in hours second time input\n");
    scanf("%d",&d);
    printf("enter the time in minutes second time input\n");
    scanf("%d",&e);
    printf("enter the time in seconds second time input\n");
    scanf("%d",&f);
    j=a*60*60;
    k=b*60;
    l=j+k+c;
    m=d*60*60;
    n=e*60;
    o=m+n+f;
    p=l+o;
    g=p/3600;
    p=p-3600*g;
    h=p/60;
    p=p-h*60;
    i=p;
    printf("the sum of both the time is %d hrs %d minutes %d seconds",g,h,i);
    return 0;
    

}