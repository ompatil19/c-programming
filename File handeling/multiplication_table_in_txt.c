#include <stdio.h>

int main(){
    FILE *ptr;
    ptr=fopen("mutiplicationtable.txt","a");
    int a=5;
    for(int i=1;i<10;i++){
    fprintf(ptr,"5*%d=%d\n",(i),(5*i));
    }
    fclose(ptr);
    return 0;
}