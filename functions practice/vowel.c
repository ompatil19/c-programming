#include <stdio.h>
#include <ctype.h>
int main(void) {
	char ch,ch1;
	scanf("%c", &ch);
	ch1=toupper(ch);
	if(ch1=='A' || ch1=='E' || ch1=='I' || ch1=='O' || ch1=='U')
	printf("Vowel");
	else 
	printf("Consonant");
	return 0;
}

