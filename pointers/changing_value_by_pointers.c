#include <stdio.h>
int change(int *x);
int main(){
    int i=10;
    printf("the value of i before passing through the function is %d \n",i);
    printf("the value of i after passing through function is %d", change(&i));
    return 0;
}
int change(int *x){
    *x=(*x)*10;
    return *x;
}