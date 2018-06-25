#include "practice3.h"

int gcd(int x, int y) {
	
	if (y > 0) {
		return gcd(y, x%y);
	} else {
		return x;
	}
	
	return 0;
	
}

void escape(char s[], char t[]) {
	
	int i = 0;
	int j = 0;
	
	while(t[i] != '\0') {
		
		switch(t[i]) {
			
			case '\t':
                s[j] = '\\';
                ++j;
                s[j] = 't';
                break;
				
            case '\n':
                s[j] = '\\';
                ++j;
                s[j] = 'n';
                break;
				
            default:
                s[j] = t[i];
                break;
				
        }
		
        ++i;
        ++j;
		
	}
	
	s[j] = '\0';
	
}