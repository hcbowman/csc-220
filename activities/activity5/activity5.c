#include <stdio.h>


int main(int argc, char *argv[]) {

	int arg1 = (int)*argv[1];
	char arg2 = (char)*argv[2];
	int i = 0;



	printf("hello");
	printf("%d", arg1);
	printf("%d", arg2);

	for(i = 0; i <= arg1; i++) {
		printf("%s", arg2);
	}

	return 0;



}
