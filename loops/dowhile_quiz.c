#include <stdio.h>
int main() {
    int n,i=0;
    printf("enter the number you want to print n numbers till \n");
    scanf("%d", &n);
    do{
        printf("the value of i is %d \n ", i);
        i++;
    }while(i<=n);
    return 0;
}