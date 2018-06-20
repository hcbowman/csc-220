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
	
	
	char ch1;
    char ch2;
	char string_line[150];
	int fault = 0, line = 0, i =0;
	
	
	ch1 = getc(fp1);
	ch2 = getc(fp2);
	
	
	/*while (ch1 != EOF && ch2 != EOF) {
		string_line[i] = ch1;
		i++;
	}
	string_line[i] = '\0';*/
	
	
	while (ch1 != EOF && ch2 != EOF) {
		
		if (ch1 == '\n' && ch2 == '\n') {
            line++;
        }
		
		if (ch1 != ch2) {
			
            fault++;
            printf("Line Number: %d\n", line);
			printf("%c\n", ch1);
			printf("%c\n", ch2);
			/*printf("%s\n", string_line);*/
        }
		
		ch1 = getc(fp1);
        ch2 = getc(fp2);
		
	}
	
	printf("Total differences: %d\n", fault);
	
}