#include <stdio.h>
int main(){
    int a,check;
    printf("enter the number you want to check is prime or not");
    scanf("%d", &a);
    for(int i=1;i<=a;i++){
        if (a%i==0)
        {
            check+=1;
        }
    }
    if(check==2){
        printf("it is a prime number");
    }
    else {
        printf("it is not a prime number");
    }
    return 0;
}