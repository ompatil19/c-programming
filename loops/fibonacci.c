# include <stdio.h>
int main(){
    int a=1,b=1,temp,n,sum;
    printf("enter the numbers of elements you want to print");
    scanf("%d", & n);
    printf("%d \n", a);
    printf("%d \n", b);
    for (int i=1;i<=(n-2);i++){
        sum=a+b;
        temp=sum;
        printf("%d \n ", sum);
        a=b;
        b=temp;
    }
    return 0;
}