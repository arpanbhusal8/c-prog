#include <Stdio.h>
int main (){
    int td[2][3][4];
    int i=0,j=0,k=0;
    for(int i=0;i<2;i++)
    {
    for(int j=0;j<3;j++)
    {
    for (int k=0;k<4;k++)
    {
        
        printf("the address of every single value of [%d][%d][%d] array is %u \n",i,j,k,&td[i][j][k]);
    }
    }
    }
return 0;
}