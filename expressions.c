#include <stdio.h>

int main(){
    // int a=7,b=7,c=7,d=5,e=1,x=3,y=4,z=1;
    // printf("%d",(a+=b-=c*10));
//     int i=2;
//     int *ptr;
//     *ptr=i;
//     printf("%d\n",(*ptr));
//     printf("%d\n",(*ptr++));
//     printf("%d\n",(*(ptr++)));
//     printf("%d",((*ptr)++));
int num1=10, num2=20;
int *p=&num1, *q=&num2;
*p++=*q++;
printf("%d %d",num1,num2);
    return 0;
}