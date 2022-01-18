#include <stdio.h>
int main() {
    int n=1;
    for (int i=1;i<=5;i++){
        for(int j=5;j>=i;j--){
            for(int k=1;k<=(i+j-n);k++){
                printf("");
                
            }
            printf("*");
        }
        printf("\n");
        n++;
    }
    return 0;
}