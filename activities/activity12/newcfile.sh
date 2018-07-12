#!/bin/bash
cat > $1 << EOF
include<stdio.h>

int main() {
	
	int i;
	
	for (i = 0; i < 10; i++) {
		printf("Hi");
	}
	
	return 0;
}
EOF
