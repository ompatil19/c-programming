# include <stdio.h>
int pattern(int n);

int pattern(int n){
    int r=1;
    for (int i=1;i<=n;i++){
        for(int j=1;j<=r;j++){
            printf("*");
        }
        printf("\n");
        r+=2;
    }
}

int main(){
    int n;
    printf("enter the number of rows you want to display");
    scanf("%d", &n);
    printf(pattern(n));
    return 0;
}