# include <stdio.h>
int pattern(int n);

int pattern(int n){
    
    for (int i=1;i<=n;i+=2){
        for(int j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
}

int main(){
    int n;
    printf("enter the number of rows you want to display");
    scanf("%d", &n);
    printf(pattern(n));
    return 0;
}