#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void compare(FILE *fp1, FILE *fp2);

int main(int argc, char **argv) {
	
	FILE *fp1;
	FILE *fp2;

	fp1 = fopen(argv[1], "r");
    fp2 = fopen(argv[2], "r");
	
	if (fp1 == NULL || fp2 == NULL)
    {
       printf("Error : Files not open");
       exit(0);
    }
	
	
	compare(fp1, fp2);
	
	fclose(fp1);
    fclose(fp2);
	
    return 0;
	
}

void compare(FILE *fp1, FILE *fp2) {
	
	
	int f1, f2;
    while (1) {
        if ((f1 = getc(fp1)) == EOF)
            break;
        if ((f2 = getc(fp2)) == EOF)
            break;

        /* TODO: Senthil Print the full sentence */

        if (f1 != f2) {
            putchar(f1);
            putchar(f2);
            break;
        }
    }
	
}