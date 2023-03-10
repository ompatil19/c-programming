#include <stdio.h>
int fact(int n);
int main(){
    int i,j,n,r,m=0;
    scanf("%d",&n);
    for (i=1;i<=n;i++){
        for(j=n;j>=i;j--){
            printf(" ");
        }
    for(int k=1;k<=i;k++){
        printf("%d ",(fact(m)/(fact(m-r)*fact(r))));
        r++;
    }
        printf("\n");
        r=0;
        m++;
    }

    return 0;
}
int fact(int n){
    int prod=1,i=1;
    while (i<=n){
        prod=prod*i;
        i++;
    }
    return prod;
}