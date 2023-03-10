# include <stdio.h>
int main() {
    for (int i=1;i<=5;i++){
        for(int j=5;j>=1;j--){
            if((j==1 || j==5)){
                printf("S");
            }
            else if (i==1 || i==5){
                printf("S");
            }
            else {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}