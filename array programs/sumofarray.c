#include <stdio.h>
int main(){
    int a[20],sum=0,n;
    printf("enter number of elements you want to enter");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(int j=0;j<n;j++)
    sum=sum+a[j];
    printf("%d",sum);
    return 0;
}