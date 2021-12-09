#include <Stdio.h>
int main (){
    int mul [3][10];
    int i=0;
    
    for (int i=0;i<3;i++){
        int j=0;
        printf("type the number you want the multiplication table of :");
        scanf("%d",&mul[i][j]);
    for (int j =1;j<=10;j++){
        printf(" %d x %d = %d\n",mul[i][0],j,j*mul[i][0]);
        
    }
    }
    return 0;
}