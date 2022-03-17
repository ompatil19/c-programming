#include <stdio.h>
int main(){
int a[5][5],row=1;
for(int i=0;i<5;i++){
    int col=1;
    for(int j=0;j<5;j++){
        a[i][j]=row*col;
        col++;
    }
    row++;
}
for(int i=0;i<5;i++){
    for(int j=0;j<5;j++){
        printf("%4d",a[i][j]);
    }
    printf("\n");
}
return 0;
 }
