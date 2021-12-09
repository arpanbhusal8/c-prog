#include <stdio.h>
int main (){
int marks[10];
int *ptr=marks;
for (int i=0;i<10;i++){
printf("enter your marks in %d th subject :\n",i+1);
scanf("%d",ptr);}
ptr++;

for (int j=0;j<10;j+2){
printf("your marks in %d th subject : %d\n",j+1,marks[j]);



} 
return 0;//failed program
}