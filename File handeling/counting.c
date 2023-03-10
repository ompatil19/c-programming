#include <stdio.h>

int main(){
    FILE *ptr;
    ptr=fopen("info.txt","r");
    char c;
    int count=0;
    while(c!=EOF){
        c=fgetc(ptr);
        if(c==' ')
        count++;
        // printf("%c",c);
    }
    printf("%d",(count+1));
    fclose(ptr);
    return 0;
}