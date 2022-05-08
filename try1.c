#include <stdio.h>
int digitsum(int n);
int main() {
	int t,n,k;
	    int f=0;
	    scanf("%d",&n);
	    k=n+1;
	    if(digitsum(n)%2==0){
	        while((digitsum(k)%2)!=0){
	        if((digitsum(k)%2)!=0){
	            f=1;
            }
	        else{
	            k++;
	        }
			f=1;
            }
	        
	    }
	    if((digitsum(n)%2)!=0){
	        while((digitsum(k)%2)==0){
	        if((digitsum(k)%2)==0){
	            f=1;
            }
	        else{
	            k++;
	        }
			f=1;
	        
	    }
	} 
	if(f==1){
	    printf("%d",k);
	
	}
	return 0;
}
int digitsum(int n)
{
    int sum,r;
    while(n>0){
        r=n%10;
        n=n/10;
        sum=sum+r;
    }
    return sum;
}

