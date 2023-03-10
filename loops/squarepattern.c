#include <stdio.h>
int main(){
    for(int i=1;i<=5;i++){
        for(int j=5;j>=1;j--){ //j is getting reinitialised every time for every i loop
            printf("S");
        }
        printf("\n");
    }
    return 0;
}