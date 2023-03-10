#include <stdio.h>
#include <string.h>
int main(){
	char *name[10]={"om","is","a","great","Guy"};
	char *s;
	// for(int i=0;i<10;i++){
	// 	gets(s);
    //     strcpy(name[i],s);
	// } 
	for(int i=0;i<10;i++){
		printf("%s\n",name[i]);
	}
	return 0;
}