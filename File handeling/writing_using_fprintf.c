#include <stdio.h>

int main(){
    char str[100];
    printf("enter the string");
    gets(str);
    FILE *ptr;
    ptr=fopen("create.txt","w");
    fprintf(ptr,"%s",str);
    fclose(ptr);
    return 0;
}