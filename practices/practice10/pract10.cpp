#include <stdio.h>
#include <stdlib.h>


class ArrayClass {
	
	public:
	
	int *array;
	
	ArrayClass(int len) {
		array = (int*)calloc(sizeof(int), len);
	}
	
	~ArrayClass() {
		free(array);
		array = NULL;
	}
	
	
};