#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main(){
    char ch;
    char a[10],b[10];
    int n;
    scanf("%s",&a);
    n=strlen(a);
    for(int i=0;i<n;i++){
    ch=a[i];
    if(isupper(ch)==1)
    {
        b[i]=tolower(ch);
    }
    else{
        b[i]=toupper(ch);
    }
    }
    puts(b);
    return 0;
}
