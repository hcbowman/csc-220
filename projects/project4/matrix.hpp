#ifndef MATRIX_HPP
#define MATRIX_HPP

#include<iostream>


class Matrix {

  private:

    int rows, columns;

	public:

		Matrix(int rows, int columns);
    Matrix( const Matrix &obj);
    ~Matrix();

    void print();
    void add(const Matrix& a, const Matrix& b);
    scalar_multiplcation;
    void transpose(Matrix& m);

    Matrix operator+();     // + (addition)
    Matrix operator*();     // * (scalar multiplication)
    Matrix operator<<();    // << (stream injection)


};

#endif
