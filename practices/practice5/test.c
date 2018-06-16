#include <stdio.h>


int main() {
	
	
	int x = 10;
	int *y = &x;
	int **z = &x;
	
	printf("%p\n", (void*) &x);
	printf("%d\n", *y);
	printf("%p\n", (void*) y);
	
	printf("z=%p, *z=%p, **z=%d, &z=%p\n",z, *z, **z, &z);
	
	return 0;
	
}