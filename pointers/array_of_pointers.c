#include <stdio.h>

int main(){
    int *ptr[10];
    for(int i=0;i<5;i++){
        scanf("%d",&ptr[i]);
    }
    for(int i=0;i<5;i++){
        printf("%d",ptr[i]);
    }
    return 0;
}