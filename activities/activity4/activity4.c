#include<stdio.h>
#include<string.h>

int main() {

  int ii;
  char words[] = "Computer Science";

  for (ii=0;ii<strlen(words);ii++) {
     if((words[ii] >= 'A') && (words[ii] <='Z')) {
       putchar(words[ii] - ('A' - 'a'));
     }
     else {
       putchar(words[ii]);
     }
  }
  putchar('\n');
  return 0;
}
