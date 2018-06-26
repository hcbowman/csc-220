#include<stdio.h>
#include<string.h>

int main() {

  char words[] = "Computer Science";
  char *p;



  for (p = words; p<strlen(words); (p)++) {
     if((p >= 'A') && (p <='Z')) {
       putchar(p - ('A' - 'a'));
     }
     else {
       putchar(p);
     }
  }
  putchar('\n');
  return 0;
}
