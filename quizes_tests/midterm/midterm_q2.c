#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

long int getInteger(char str[], int size);

int main() {
	
	char str[100];
	char enc[100];
	int i;
	long int li = 0;
	
	memset(str, 0, 100);
	memset(enc, 0, 100);
	
	printf("Enter a string; ");
	fgets(str,100,stdin);
	
	printf("%s\n", str);
	
	for(i=0; i<100; i++) {
		
        if ( !((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z') || str[i] == ' ' || str[i] == '\0' || str[i] == '\n' )) {
			fprintf( stderr, "ERROR: Non-printable char detected.");
			return 0;
		}

		enc[i] = str[i];
	}
	
	li = getInteger(enc, strlen(str));
	
	printf("%ld", li);
	
	return 0;

}	

long int getInteger(char str[], int size) {
	
	int i = 0;
	long int li = 0;
	
	for(i=0; i<size; i++) {
		li = li * 10 + (str[i] - '0');
	}
	
	return li;
	
}