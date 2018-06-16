#include <stdio.h>
#include <stdlib.h>

struct act6_t {
	
	int my_value;
	char my_string[50];
	
};

int main() {
	
	struct act6_t *pt;
	int i, input;
	
	printf("Enter number of entries: ");
	scanf("%d", &input);
	
	
	pt = (struct act6_t*) malloc (input * sizeof(struct act6_t));
	
	for(i = 0; i < input; i++) {
		printf("Enter some strings then some integers:\n");
		scanf("%s %d", &(pt+i)->my_string, &(pt+i)->my_value);
	}
	
	for(i = 0; i < input; i++) {
		printf("%s\t%d\n", (pt+i)->my_string, (pt+i)->my_value);
	}
	
	
	free(pt);
	return 0;
	
}