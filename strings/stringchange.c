#include <stdio.h>
#include <string.h> 
int main(){
    char s[100],s1[100];
    int n;
    printf("enter the value of the string ");
    gets(s);
    n=strlen(s);
    for(int i=0;i<n;i++){
        if(s[i]=='z' || s[i]=='Z' || s[i]=='a' || s[i]=='A' || s[i]==' '){
            s1[i]=s[i];  
        }
        else{
        s1[i]=(char)(((int)s[i])+1);
    }
    }
    puts(s1);
    return 0;
}