#include <stdio.h>
#include <string.h>
void slice(char s1[],int a,int b);
int main(){
    char s1[100];
    int m,n;
    printf("enter the string you want to enter\n");
    scanf("%s",&s1);
    printf("enter the lower limit");
    scanf("%d",&n);
    printf("enter the upper limit");
    scanf("%d",&m);
    printf("%s\n",s1);
    slice(s1,n,m);
    return 0;
}
void slice(char s1[],int a,int b){
    char s2[100];
    int k=0;
    for(int i=a;i<=b;i++){
        s2[k]=s1[i];
        k++;
    }
    strcpy(s1,s2);
    printf("%s\n",s1);
}