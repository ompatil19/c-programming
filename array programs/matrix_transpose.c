#include <stdio.h>

int main(){
    int a[100][100],b[100][100],m,n;
    printf("enter the order of matric a");
    scanf("%d %d",&m,&n);
    printf("enter the element of matric a");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            b[i][j]=a[j][i];
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    printf("\n\n\n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }

    return 0;
}