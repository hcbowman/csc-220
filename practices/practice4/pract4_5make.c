#include <string.h>
#include "pract4_5make.h"

int main() {


	char str1[] = "function returns the number of characters in the string";
	size_t len = strlen(str1);
	
	print_every_other(str1,3,len);
	
	return 0;
	
}
