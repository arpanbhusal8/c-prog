#include <stdio.h>
int area (int a,int b);
int main (){
    int a,b,c;
    printf ("enter the length of the rectangle or a quadrilateral figure\n");
    scanf("%d",&a);
    printf ("enter the breadth of the rectangle or a quadrilateral figure\n");
    scanf("%d",&b);
    c= area (a,b);
    printf("the area of the given rectangle or a quadrilatera that is regular is %d\n",c);
    return 0;

}
int area (int a,int b){
    int d;
    d=a*b;
    return d;
}