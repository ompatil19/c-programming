# include <stdio.h>
void input();
void output();
int calculate();
void input(){
    int a,b;
    scanf("%d",&a);
    scanf("%d",&b);
}
int calculate(){
    int a,b,t,var=0;
    printf("enter 1 for + enter 2 for -");
    scanf("%d",&t);
    input();
    switch(t){
        case 1:
        var=a+b;
        printf("%d", var);
        break;
        case 2:
        var=a-b;
        printf("%d", var);
        break;
        default:
        printf("invalid input");
    }
    return var;
}
void output(){
    printf("the answer is %d", calculate());
}
int main(){
    output();
}