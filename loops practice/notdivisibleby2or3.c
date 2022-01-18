#include <stdio.h>
int main(){
    int f;
    for (int i=1;i<=100;i++){
        if((i%2)!=0 && (i%3)!=0){
            f++;
            printf("%d \n ", i);
        } 
    }
    printf("the number which are not divisible by 2 and 3 are %d", f);
    return 0;
}