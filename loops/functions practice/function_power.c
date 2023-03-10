#include <stdio.h>
#include <math.h>
int power(int a,int b);

int power(int a, int b ){
    float powe;
    powe=pow(a,b);
    return powe;
}

int main(){
    printf("%f", power(2,-3));
    return 0;
}