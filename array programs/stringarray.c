#include <stdio.h>
int main(){
    char ch[5][6]={"om","gauri","rohan","chetna"};
    for(int i=0;i<5;i++){
        for(int j=0;j<6;j++)
        printf("%s",ch[i][j]);
    }
    return 0;
}