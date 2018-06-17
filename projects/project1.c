#include<stdio.h>

unsigned int easydecrypt(char c);
unsigned int easyencrypt(char c);

int main() {
  int c;
  
  while ( (c = getc(stdin)) != EOF) {
    printf("%d\n", easyencrypt(c));
	/*printf("%c %d", easydecrypt(c), easydecrypt(c));*/
    c++;
  }

  printf("\n");
  
  return 0;
}


unsigned int easydecrypt(char c){
	char a;
	a = c - 100;
	
	
	return a;
}

unsigned int easyencrypt(char c){
	char a;
	a = c + 100;
	
	return a;
}


  