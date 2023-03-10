#include <stdio.h>

int main(){
    int *b;
    int a[100];
    b=&a[0];
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",b);
        b++;
    }
    b=&a[0];
    for(int i=0;i<n ;i++){
    printf("%d\n",*b);
    b++;
    }
    return 0;
}