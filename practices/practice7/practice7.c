#include <stdio.h>
#include <ctype.h>
#include "a.h"


int main () {
	
	int a, b;
	
	
	printf("Enter 2 values to find their GCD ");
	if (scanf("%d %d", &a, &b) !=2) {
		fprintf(stderr, "Non-numeric input is given");
		return 0;
	} else {
		printf("GCD of (%d,%d): %d \n", a, b, gcd(a,b));
		return 0;
	}
	
	return 0;
	
}