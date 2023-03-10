#include <stdio.h>

int main(){
    int a[5],sum=0;
    int *ptr;
    for(int i=0;i<5;i++){
        scanf("%d",&a[i]);
    }
    ptr=a;
    for(int i=0;i<5;i++){
        sum=sum+(*ptr);
        ptr++;
    }
    printf("%d",sum);
    return 0;
}