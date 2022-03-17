#include <stdio.h>
void func(int x);
int main(){
    int i;
    printf("the address of i is %u \n",&i);
    func(i);
    return 0;
}
void func(int x){
    printf("the address of i through function is %u",&x);
}