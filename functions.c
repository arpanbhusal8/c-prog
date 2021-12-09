#include <stdio.h>
int main (){
    void display ();
    void afternoon();
    void evening ();
    int time;
    printf("enter the military time in hours only not minutes and seconds as of now\n");
    scanf("%d",&time);
    if (time>=0 && time<12){
        display();
    }
    else if (time>=12 && time<=16 ){
        afternoon ();
        
    }
    else if (time > 16 && time <=19){
        evening ();
    }
    return 0;
}
void display(){
    printf("good morning rise and shine, sunshine\n");
}
void afternoon (){
    printf("good afternoon mate..can't wait to go home eh?\n");
}
void evening (){
    printf("good evening my man..are you as tired as i am ?\n");

}
