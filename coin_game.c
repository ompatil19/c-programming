#include <stdio.h>
void main()
{
    int n;int a[100];
    printf("enter the number of coins");
    scanf("%d",&n);
    int i=0;
    printf("enter the numbers on coins");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    int sume=0,sumo=0;
    for(i=0;i<n;i++)
    {
        if(n%2==0)
        sume+=a[i];
        else
        sumo+=a[i];
    }
    if(sume>sumo)
        printf("start with last");
    else
        printf("start with first");
    
}