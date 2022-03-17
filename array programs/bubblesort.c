#include <stdio.h>
int main(){
    int a[20],n,temp;
    printf("enter number of elements of an array");
    scanf("%d",&n);
    printf("enter elements of array ");
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++)
        if(a[j]>a[j+1]){
            temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
        }
    }
    printf("sorted array is \n");
    for(int i=0;i<n;i++)
    printf("%d \n",a[i]);
    return 0;
}