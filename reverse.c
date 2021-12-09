#include <Stdio.h>
void rev(int num[],int a);
int main (){

    int a;
    printf("type the number of terms of input you want to enter \n");
    scanf("%d",&a);
    int num[a];
    int *ptr=num;
    for(int i=0;i<a;i++){
    printf("enter your %d th input: \n",i+1);
    scanf("%d",ptr);
ptr++;}
rev(num,a);
return 0;

}
void rev(int num[],int a){
    for(int i=a-1;i>=0;i--)
    {
        printf("the reverse of the entered input is %d\n", num[i]);

    }
}