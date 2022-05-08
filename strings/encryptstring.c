#include <stdio.h>
#include <string.h> 
int main(){
    char s[100],s1[100];
    int n;
    printf("enter the value of the string ");
    scanf("%s",&s);
    n=strlen(s);
    for(int i=0;i<n;i++){
        s1[i]=(char)(((int)s[i])+1);
    }
    printf("%s",s1);
    return 0;
}