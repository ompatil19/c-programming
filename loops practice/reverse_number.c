# include <stdio.h>
int main  (){
    int n,r,rev,a;
    printf("enter the number ");
    scanf("%d", &n);
    a=n;
    while(n>0){
        r=n%10;
        n=n/10;
        rev=rev*10+r;
    }
    if(rev==a){
        printf("it is a palendrom number");

    }
    else {
        printf("it is not a palendrome number");
    }
    return 0;
}