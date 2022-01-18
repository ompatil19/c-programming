#include <stdio.h>
int main(){
    float c,f;
    printf("enter the value you want to convert to farenheit");
    scanf("%f" , &c);
    f=(((9*c)/5)+32);
    printf("the value in farenheit is %f \n" ,f);
    return 0;
}