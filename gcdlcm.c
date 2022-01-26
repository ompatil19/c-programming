#include <stdio.h>

int main() {
    int a,b,t,gcd,lcm,tem,tem1,rem;
	scanf("%d", &t);
	while(t--){
	    scanf("%d %d", &a ,&b);
	    if(a>b){
	        a=a;
	        b=b;
	    }
	    else {
	        tem=a;
	        a=b;
	        b=tem;
	    }
	        while(rem!=0){
	                rem=a%b;
	                tem1=rem;
	                a=b;
	                b=tem1;
	                gcd=a;
	                if(b==0)
	                break;
	        }
	            lcm=(a*b)/gcd;
	    printf("%d %d \n",gcd, lcm);
	    }
	return 0;
}
