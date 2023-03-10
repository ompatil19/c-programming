# include <stdio.h>
int main() {
    int a,i=1,prod=1;
    printf("enter the number you want the factorial of");
    scanf("%d", &a);
    while (i<=a){
        prod=prod*i;
        i++;
    }
    printf("the factorial of the number %d is %d \n", a, prod);
    return 0;
}