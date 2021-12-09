#include <stdio.h>
int main(){
    int kndo=3;
    int kande=3;
    int subigya[3][3];
    for (int i=0;i<3;i++){
        for (int j=0;j<3;j++){
            printf( "the %d of %d of kandez is \n",i+1,j+1);
            scanf("%d",&subigya[i][j]);
            
        }

    }
    for (int i=0;i<3;i++){
        for (int j=0;j<3;j++){
        
               printf(" %d",subigya[i][j]);
        }
                printf("\n");
            
            
        
            
        }
    
    return 0;
        
}