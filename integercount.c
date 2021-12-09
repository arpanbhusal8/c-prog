#include<Stdio.h>
void count(int cnt[],int a);
int main (){
    int a;
    printf("enter the number of integers you want to input \n");
    scanf("%d",&a);
    int cnt[a];
    for(int i=0;i<a;i++){
        printf("enter the integers positive or negative you want to store\n");
        scanf("%d",&cnt[i]);
    }
    count(cnt,a);
    
return 0;
}
void count (int cnt[], int a){
    int l=0;
for(int i=0;i<a;i++){
    if ( cnt[i]<0)
    printf("%d is not positive\n",cnt[i]);
    else {
    l++;} 

}
printf("The total number of positive integers present in the input is %d \n",l);
}

