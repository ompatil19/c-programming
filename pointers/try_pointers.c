#include <stdio.h>
int main(){
    int a=8;
    scanf("%d",&a);
    int *b=&a;
    printf("address is %u",&a);
    printf("the value of a is %d", *(&b));
    return 0;
}