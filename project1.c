#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main ()
{    
    int c;
    int guesscounter=0;
    int guesslimiter;
    int guessnumber;
    
    srand(time(0));
    c=rand()%100 +1;
    guesslimiter=10;
    for(guesscounter=0;guesscounter <=guesslimiter;guesscounter++)
{
    printf("enter any random number between 0 and 100\n");
    scanf("%d",&guessnumber);
        if (c==guessnumber){
            printf("yayy,you have guessed the random number correctly in %d trys\n",guesscounter);
        
            break;
        }
        else if(guessnumber>c) {
            printf("try again your guessed number is higher than the random number generated\n");

        }
        else if (guessnumber<c) {
            printf("your guessed number is lesser than the random number generated\n");
        }
    }
          if (c!=guessnumber){
            printf("you have failed ....the random number generated was %d\n",c);
        }

    
 return 0;
}