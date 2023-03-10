# include <stdio.h>
int main  (){
    int n,r,sum=0,a;
    printf("enter the number ");
    scanf("%d", &n);
    a=n;
    while(n>0){
        r=n%10;
        n=n/10;
        sum+=(r*r*r);
    }
    if(sum==a){
        printf("it is a armstrong number");

    }
    else {
        printf("it is not a armstrong number");
    }
    return 0;
}