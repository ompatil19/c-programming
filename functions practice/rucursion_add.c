#include <stdio.h>
int sum(int n);
int main(){
    int n;
    printf("enter the number");
    scanf("%d",&n);
    printf("the final  answer is %d", sum(n));
    return 0;
}

int sum(int n){
    if(n==0){
        return 0;
    
    }
    else{
        return n+ sum(n-1);
    }
}