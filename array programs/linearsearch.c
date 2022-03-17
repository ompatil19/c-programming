#include <stdio.h>
int main(){
    int a[20],n,search,pos=0;
    printf("enter number of elements you want to enter");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("enter element you want to find");
    scanf("%d",&search);
    for(int i=0;i<n;i++)
    if(a[i]==search)
    {
        pos=i;
    }
    if(pos!=0)
    printf("search successful at position %d", pos+1);
    else
    printf("search unsuccessful");
    return 0;
}