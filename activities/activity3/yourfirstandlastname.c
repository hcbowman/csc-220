#include <stdio.h>
#include "activity3.h"

int main(void) {
	
	printf("GCD1 (200,352): %d \n", gcd(200,352));
	printf("GCD2 (80,128): %d \n", gcd(80,128));
	
	
	
	char s[100];
	char t[100] = "This		line and	that line";
	
	printf("%s\n", t);
	
	escape(s,t);

	printf("%s\n", s);
	
	char ss[100];
	char tt[100] = "This		li\nne and	\nthat line";
	
	printf("%s\n", tt);
	
	escape(ss,tt);

	printf("%s\n", ss);
	
	return 0;
	
	
}