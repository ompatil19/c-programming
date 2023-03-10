#include <stdio.h>

int main(){
    int a[100][100],b[100][100],c[100][100],m,n,p,q;
    printf("enter the order of matric a");
    scanf("%d %d",&m,&n);
    printf("enter the order of matric b");
    scanf("%d %d",&p,&q);
    printf("enter the element of matric a");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("enter the element of matric b");
    for(int i=0;i<p;i++){
        for(int j=0;j<q;j++){
            scanf("%d",&b[i][j]);
        }   
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<q;j++){
            c[i][j]=0;
            for(int k=0;k<n;k++){
                c[i][j]+=a[i][k]*b[k][j];
            }
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    printf("\n\n\n");
    for(int i=0;i<p;i++){
        for(int j=0;j<q;j++){
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }
    printf("\n\n\n");
    for(int i=0;i<m;i++){
        for(int j=0;j<q;j++){
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }
    return 0;
}