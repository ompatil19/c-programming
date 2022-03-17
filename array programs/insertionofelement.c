#include <stdio.h>
int main(){
    int a[20],n,new,pos;
    printf("enter number of elements you want to enter");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("enter element you want to add");
    scanf("%d",&new);
    printf("enter position you want to add");
    scanf("%d",&pos);
    for(int i=20;i>=pos;i--)
    a[i]=a[i-1];
    a[pos-1]=new;
    for(int i=0;i<n+1;i++)
    printf("%d \n", a[i]);
    return 0;
}