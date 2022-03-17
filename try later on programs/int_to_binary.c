#include <stdio.h>
int main(){
    int n,r,rev,a[4]={0},i=0;
    printf("enter number to be converted to binary");
    scanf("%d", &n);
    while(n>0){
        r=n%2;
        n=n/2;
        a[i]=r;
        i++;
    }
    for(int j=4;j>=0;j--)
    printf("%d",a[j]);
    return 0;
}