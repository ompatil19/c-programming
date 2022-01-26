#include <stdio.h>

int main(void) {
	int t,a=1,n;
	scanf("%d", &t);
	while(t--){
	    scanf("%d", &n);
	    for(int i=1;i<=n;i++){
	        for(int j=n;j>=1;j--){
	            printf("%d",a);
	            a++;
	        }
	        printf("\n");
	    }
	}
	return 0;
}