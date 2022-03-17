#include <stdio.h>
int sum(int x,int y);
int main(void) {
	int a=7,b=8;
	printf("the value of a and b is %d and %d \n",a,b);
	printf("the sum of a and b is %d \n",sum(a,b));
	printf("the value of a and b after function call is %d and %d \n",a,b);
	return 0;
}
int sum(int x,int y){
	int c;
	x=10000;
	y=20000;
	c=x+y;
	return c;
}