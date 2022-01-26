#include <stdio.h>
int area();

int area(int l, int b){
    int ar;
    ar=l*b;
    return ar;
}
int main(){
    int l,b;
    printf("enter the values of l an b ");
    scanf("%d %d", &l , &b);
    printf("the area of the rectangle is %d \n", area(l,b));
    return 0;
}