#include <stdio.h>
void swapbyvalue(int a,int b);
void swapbyref(int *a, int *b);
int main(){
    int a=5,b=6;
    printf("the value of a and b before swap is %d and %d \n",a,b); 
    swapbyvalue(a,b);  
    printf("the value of a and b after swap is %d and %d \n",a,b);  
    printf("the value of a and b before swap is %d and %d \n",a,b); 
    swapbyref(&a,&b);  
    printf("the value of a and b after swap is %d and %d \n",a,b);
    return 0;
}
void swapbyvalue(int a,int b){
    int temp;
    temp=a;
    a=b;
    b=temp;

}
void swapbyref(int *a, int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;

}