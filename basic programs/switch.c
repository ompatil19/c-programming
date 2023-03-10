#include <stdio.h>

int main(){
    int a,b,sum;
    char op;
    printf("enter the oprator you want to perform");
    scanf("%c",&op);
    scanf("%d",&a);
    scanf("%d",&b);  
    switch(op){
        case '+':
        sum=a+b;
        break;
        case '-':
        sum=a-b;
        break;
        default:
        printf("this is not a operator");
    }
    printf("the answer is %d",sum);
    return 0;
}