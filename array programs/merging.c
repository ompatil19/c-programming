#include <stdio.h>
int main(){
    int a[20],n,b[20],m,c[20],k;
    printf("enter number of elements of an array 1");
    scanf("%d",&n);
    printf("enter elements of array 1 ");
    for(int i=0;i<n;i++){
    scanf("%d",&a[i]);
    c[i]=a[i];
    }
    printf("enter number of elements of an array 1");
    scanf("%d",&m);
    printf("enter elements of array 1 ");
    for(int i=0;i<n;i++)
    scanf("%d",&b[i]);
    k=0;
    for(int i=n;i<(n+m);i++){
    c[i]=b[k];
    k++;
    }
    printf("merged array");
    for(int i=0;i<n+m;i++)
    printf("%d \n",c[i]);
    return 0;
}
