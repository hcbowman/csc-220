#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>

#include "project1.h"

void decrypt(unsigned char str[], int size){
	int i;
	
	printf("size: %d\n", size);
		
	for(i=0; i<size; i++) {
		printf("[%d]", str[i]);
		str[i] = (str[i]/2);
		printf("[%d]", str[i]);
	}
	
}