#include <stdio.h>
int average(int a,int b,int c);
int average(int a,int b,int c){
    int avg=(a+b+c)/3;
    return avg;
}
int main(){
    int x,y,z;
    scanf("%d%d%d", &x,&y,&z);
    printf("the average of three numbers is %d", average(x,y,z));
}