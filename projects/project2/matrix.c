#include <assert.h>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include "matrix.h"


#define Mat(matrix,row,col) matrix->data[row + col * matrix->cols]


/* Create a new matrix */
matrix_t * new_matrix(int rows, int cols) {
	
	int i;	
	matrix_t * m = (matrix_t *) malloc(sizeof(matrix_t));
	
	(*m).rows = rows;
	(*m).cols = cols;
	
	
	(*m).data = (int *) malloc(rows*cols*sizeof(int));
	
	
	for (i=0; i<rows*cols; i++) {
		(*m).data[i] = i;
	}
	
	return m;
	
	
	
	
}

/* Neatly print the matrix */
void print_matrix(const matrix_t * matrix) {
	
	int row, col;
	
	for(row=0; row<(*matrix).rows; row++) {
		
		for(col=0; col<(*matrix).cols; col++) {
			printf("%d ", Mat(matrix,row,col));
		}
		printf("\n");
	}
	
}
	
	
/* Get/Set the value at row, col */
int get_value(const matrix_t * matrix, int row, int col) {
	
	int i;
	i = 0;
	
	assert (matrix->data);
	
	i = Mat(matrix,row,col);
	
	return i;
	
}
	
void set_value(matrix_t * matrix, int row, int col, int value) {
	
	assert (matrix->data);
	
	Mat(matrix,row,col) = value;
	
}
	
	
/* Return the sum of two matrices */
matrix_t * add(const matrix_t * m1, const matrix_t * m2) {
	
	int row, col;
	for (col = 1; col <= m1->cols; col++) {
		for (row = 1; row <= m1->rows; row++) {
			Mat(m3, row, col) = Mat(m1, row, col) + Mat(m2, row, col);
		}
	}
	
	return m3;
}
	
	
/* Return the transpose of a matrix */
matrix_t * transpose(const matrix_t * matrix) {
	
	int row, col;
	
	for (row = 1; row <= matrix->rows; row++) {
		for (col = 1; col <= matrix->cols; col++) {
			Mat(matrix, col, row) = Mat(matrix, row, col);
		}
	}
	
	return 0;
	
}