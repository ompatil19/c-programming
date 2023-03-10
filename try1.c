#include <stdio.h>
void main(){
    int n,i,j,k,x,l;
    printf("enter n:");
    scanf("%d",&n);
    for (i=0; i<n; i++){
        for(j=i; j<n-1; j++){
            printf(" ");
        }
        x=i;
        for (k=0; k<=i; k++){
            printf("%3d",++x);
        }
        for (l=0; l<i; l++){
            printf("%3d",--x);
        }
        printf("\n");
    }
}