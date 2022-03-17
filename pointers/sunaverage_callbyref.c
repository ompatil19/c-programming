#include <stdio.h>
int sum(int *x, int *y);
int average(int *x, int *y);
int main(){
    int i,j;
    scanf("%d%d",&i,&j);
    printf("the sum of two numbers is %d",sum(&i,&j));
    printf("the average of two numbers is %d",average(&i,&j));
    return 0;
}
int sum(int *x, int *y){
    int sum;
    sum=*x+(*y);
    return sum;
}
int average(int *x, int *y){
    int avg;
    avg=(*x+(*y))/2;
    return avg;
}