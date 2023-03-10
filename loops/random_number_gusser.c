# include <stdio.h>
# include <stdlib.h>
# include <time.h>

int main(){
    int number,guess,f=0;
    srand(time(0));
    number=rand()%100 +1; //generates random number from 1 to 100
    for (int i=0;i<=100;i++){
        printf("guess the number");
        scanf("%d", & guess);
        f++;
        if(number>guess){
            printf("please guess a higher number");
        }
        else if(number<guess){
            printf("please guess a lower number");
        }
        else if(guess<1 || guess>100){
            printf("enter a valid number from 1 to 100");

        }
        else if(guess==number){
            printf("congratulations you have guessed the right number");
            break;
        }
    }    
    printf("you took %d tries to get the number correct", f);
    return 0;
}