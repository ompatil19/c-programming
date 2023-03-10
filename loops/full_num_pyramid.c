#include <stdio.h>

int main(){
    int n=1,m;
    for(int i=1;i<=5;i++){
        m=i;
        for(int j=5;j>=i;j--){
            printf(" ");
        }
    for(int k=1;k<=n;k++){
        if(k==1 || k==n){
        printf("%d", m);
        }
        else if((i-k)==0){
            printf("%d", n);
        }
        else if(k<i) {
            printf("%d", (m+(k-1)));
        }
        else if(k>i){
            printf("%d", (m+(n-k)));
        }
    }
    n+=2;
    printf("\n");
    }
    return 0;
}