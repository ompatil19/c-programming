#include <stdio.h>
int main(){
    char str[]="Ompatil";
    char *ptr=str;
    for(int i=0;str[i]!='\0';i++){
        printf("%u\n",ptr);
        ptr++;
    }
    return 0;
}