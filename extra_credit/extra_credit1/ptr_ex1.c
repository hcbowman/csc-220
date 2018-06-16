#include <stdio.h>


int main() {
	
	
	int i = 12, *j = 0, **k = 18;
	printf("i = %d, j = %d, k = %d\n", i, j, k);
	j = &i;
	*j = 24;
	k = &j;
	**k = 48;
	printf("i = %d, j = %d, k = %d\n", i, j, k);
	
	/*
	printf("%p\n", (void*) &x);
	printf("%d\n", *y);
	printf("%p\n", (void*) y);
	
	printf("z=%p, *z=%p, **z=%d, &z=%p\n",z, *z, **z, &z);
	*/
	return 0;
	
}