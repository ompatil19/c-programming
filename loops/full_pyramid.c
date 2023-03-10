#include <stdio.h>
int main(){
    int i,j,n=1,r;
    scanf("%d",&r);
    for (i=1;i<=r;i++){
        for(j=r;j>=i;j--){
            printf(" ");
        }
    for(int k=1;k<=n;k++){
        printf(" *");
    }
        printf("\n");
        n+=2;
    }

    return 0;
}