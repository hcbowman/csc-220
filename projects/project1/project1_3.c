#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>


#include "project1.h"



void decrypt(unsigned char str[], int size);
void encrypt(unsigned char str[], int size);

int main() {
	
	
	char str[100];
	unsigned char enc[100];	
	unsigned int i;
	
	memset(str, 0, 100);
	memset(enc, 0, 100);
	
	fgets(str,100,stdin);
	
	for(i=0; i<100; i++) {		
        if (str[i] < 0) {
			fprintf( stderr, "ERROR: Non-printable char detected.");
			return -1;
		}

		enc[i] = str[i];
	}
		
	encrypt(enc, strlen(str));
	printf("\n");
	decrypt(enc, strlen(str));
	printf("\n");
	printf("FINAL: %s", enc);
  
  return 0;
}