#include <Stdio.h>
void s (int a,int b, int *sum , float *avg);
int main (){
    int a=7,b=8,sum;
    float avg;
    s (a,b,&sum,&avg);
    printf("sum=%d\n",sum);
    printf("average =%f\n",avg);
    return 0;


}
void s(int a,int b,int *sum , float *avg)
{
    *sum=a+b;
    *avg=*sum/2;
}