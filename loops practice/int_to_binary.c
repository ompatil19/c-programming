#include <stdio.h>
int main(){
    int n,r,rev,a;
    printf("enter number to be converted to binary");
    scanf("%d", &n);
    a=n;
    while(n>0){
        r=n%2;
        n=n/2;
        printf("%d", r);
    }
    return 0;
}