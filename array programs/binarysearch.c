# include <stdio.h>
int main(){
    int a[20],n,low,high,mid,key,f;
    printf("enter number of elements of an array");
    scanf("%d",&n);
    printf("enter elements of array in ascending order");
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("enter key element to be searched");
    scanf("%d",&key);
    low=0;
    high=n-1;
    while(low<=high){
        mid=(low+high)/2;
        if(key==a[mid]){
        f=1;
        break;
        }
        if(key>a[mid])
         low=mid+1;
        else if(key<a[mid])
         high=mid-1;
    }
    if(f==1)
    printf("search successful element found at postion %d",(mid+1));
    else
    printf("search unsuccesful");
    return 0;


}