#include<stdio.h>
#include "pract4_5make.h"


void print_every_other(char str[], int n, int len) {
	
	int i;
	
	printf("%s\n", str);
	
	for(i = 0; i<len; i++) {
		
		if (i % n == 0) {
				printf("%c\n", str[n]);
		}
	}
	
}