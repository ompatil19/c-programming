#include <stdio.h>

int main(){
    FILE *ptr;
    ptr=fopen("info.txt","r");
    char c;
    
    while(c!=EOF){
        c=fgetc(ptr);
        printf("%s",c);
    }
    fclose(ptr);
    return 0;
}