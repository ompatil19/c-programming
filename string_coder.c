#include <stdio.h>
#include <string.h>
char replace(char st[26],int k);
int main(){
    char str[100],str1[100],trans[100],ch;
    printf("enter your coded language sequence");
    scanf("%d",&str1);
    printf("enter the string to convert");
    for(int i=0;i<100;i++){
        scanf("%d",&str[i]);
    }
    int n=strlen(str);
    for(int i=0;i<n;i++){
    ch=str[i];
    if(ch>=97 && ch<122){
        ch=replace(str1,ch-97);
    }
    if(ch>=65 && ch<90){
        ch=replace(str1,ch-65);
    }
    if(ch=='_'){
        ch=' ';
    }
    }
    for(int i=0;i<100;i++){
        printf("%d",&str[i]);
    }
    return 0;
}
char replace(char st[100],int k){
    char ch1;
    ch1=st[k-1];
    return ch1;
    }
