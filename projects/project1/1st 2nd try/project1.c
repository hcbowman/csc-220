#include<stdio.h>
#include<stdlib.h>


unsigned int easydecrypt(char c);
unsigned int easyencrypt(char c);

int main() {
  
  while ( (c = getc(stdin)) != EOF) {
    printf("%d\n", easyencrypt(c));
	
	c2 = easyencrypt(c);
	
	printf("%d\n", easydecrypt(c2));
    c++;
  }

  printf("\n");
  
  return 0;
}


unsigned int easydecrypt(unsigned int c){
	int a;
	a = ((c/2));
	
	
	return a;
}

unsigned int easyencrypt(char c){
	int a;
	a = (c + c);
	
	return a;
}

  