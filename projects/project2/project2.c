#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#include"matrix.h"

	
	
	

int main(int argc, char **argv) {
	
	matrix_t * A;
	matrix_t * B;
	
	int rows, cols, rows2, cols2;
	FILE *fp1;
	FILE *fp2;
	
	fp1 = fopen(argv[1], "r");
    fp2 = fopen(argv[2], "r");
	
	
	fscanf(fp1, "%d %d", &rows, &cols);
	fscanf(fp2, "%d %d", &rows2, &cols2);
	
	printf("Rows:%d, Cols:%d\n", rows, cols);
	
	A = new_matrix(rows,cols);
	print_matrix(A);
	

	printf("\nRows:%d, Cols:%d\n", rows2, cols2);
	
	B = new_matrix(rows2,cols2);
	print_matrix(B);
	
	
	C = add(A,B);
	print_matrix(C);
	
	
	
	fclose(fp1);
    fclose(fp2);
	return 0;
	
	
	
}