#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>


void decrypt(char str[]);
void encrypt(char str[]);

int main() {
	
	
	char* str;
	
	
	str = (char*) malloc(strlen(argv[1]) + 1);
	strcpy(str, argv[1]);
	
	encrypt(str);
    printf("%d", str);
	
	free(str);
	
	printf("\n");
  
  return 0;
}


void decrypt(char str[]){
	
	int i;
	for(i=0; i<strlen(str); i++) {
		str[i] = (str[i]/2);
	}
	
}

void encrypt(char str[]){
	
	int i;
	for(i=0; i<strlen(str); i++) {
		str[i] = (str[i] + str[i]);
	}
	
}