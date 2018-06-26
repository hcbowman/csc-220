#include "a.h"

int gcd(int x, int y) {
	
	if (y > 0) {
		return gcd(y, x%y);
	} else {
		return x;
	}
	
	return 0;
	
}