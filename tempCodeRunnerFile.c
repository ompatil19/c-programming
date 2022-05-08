#include <stdio.h>

int main(void) {
	int t,d,n,f=0,r;
	scanf("%d",&t);
	while(t--){
	    scanf("%d",&d);
        char s[d];
	    scanf("%s",&s);
	    for(int i=0;i<d;i++){
            if(s[i]=='5' || s[i]=='0'){
                f=1;
            }
        }
	    if(f==1){
	        printf("YES");
        }
	    else
        {
	        printf("NO");
	    }
        
	}
	return 0;
}

