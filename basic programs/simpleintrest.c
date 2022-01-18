#include <stdio.h>
int main(){
    float p,t,r,si;
    printf("enter the value of principle");
    scanf("%f" , &p);
    printf("enter the value of time");
    scanf("%f" , &t);
    printf("enter the value of rate");
    scanf("%f" , &r);
    printf("the simple intrest is %f \n" ,(p*t*r)/100);
    return 0;
}