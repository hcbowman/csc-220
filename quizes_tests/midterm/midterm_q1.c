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
	
	char file1[200];
	char file2[200];
	int line = 0;
	int ii = 0;
	
	while (((fgets(file1, 200, fp1)) && (fgets(file2, 200, fp2))) != '\0') {
		
		line++;
		
		ii = strcmp(file1, file2);   
        
		if (ii != 0){
			printf("\nThere is a difference on line:%i\n", line);	      
			printf("This is the first line that does not match;\n%s\n", file1);
			fclose(fp1);
			fclose(fp2);
			exit(0);
			}
	}
}