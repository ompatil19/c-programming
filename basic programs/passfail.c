#include <stdio.h>
void main(){
    int a,b,c,total;
    printf("enter the marks obtained in sub 1");
    scanf("%d", &a);
    printf("enter the marks obtained in sub 2");
    scanf("%d", &b);
    printf("enter the marks obtained in sub 3");
    scanf("%d", &c);
    total=a+b+c;
    if (total>40 && a>=33 && b>=33 && c>=33){
        printf("you have passed");

    }
    else {
        printf("you have failed");
    }
    
}