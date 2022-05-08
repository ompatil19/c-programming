#include <stdio.h>
#include <math.h>
int main(){
	int t,n,x,f=0;
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		int a[n];
		for(int i=0;i<n;i++){
			scanf("%d",&a[i]);
		}
		scanf("%d",&x);
		for(int i=0;i<n;i++){
			for(int j=i+1;j<n;j++){
				if(((a[i])^(a[j])&x)==0){
					f++;
				}
			}
		}
		printf("%d \n", f);
		
	}
	return 0;
}