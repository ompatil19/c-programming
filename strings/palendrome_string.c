#include <stdio.h>
#include <string.h>
int main(){
    char s[10],s1[10];
    scanf("%s",&s);
    int n,k=0;
    n=strlen(s);
    for(int i=n-1;i>=0;i--){
        s1[k]=s[i];
        k++;
    }
    puts(s1);
    if(strcmp(s1,s)==0){
        printf("its a palendrome");
    }
    else
    printf("its not a palendrome");
    return 0;
}