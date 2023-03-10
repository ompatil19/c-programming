#include <stdio.h>
#include <math.h>
#define pi 3.1412
int main(){
    float deg,sum=1,x,num,denom,term;
    int i;
    printf("enter the value of degree");
    scanf("%f",& deg);
    x=deg*pi/180;
    num=-(x*x);
    denom=2;
    i=3;
    do{
        term=num/denom;
        num=-num*x*x;
        denom=denom*(i)*(i+1);
        i+=2;
        sum+=term;
    }while(fabs(term)>0.0000001);
    printf("%f\n", sum);
    printf("%f", cos(x));
    return 0;
}