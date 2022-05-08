#include <stdio.h>
typedef struct vector{
    float x,y;
} vec;
int main(){
    vec v1;
    printf("Enter the value of x");
    scanf("%f",&v1.x);
    printf("Enter the value of y");
    scanf("%f",&v1.y);
    printf("%fi+%fj",v1.x,v1.y);
    return 0;
}