#ifndef MATRIX_HPP
#define MATRIX_HPP

#include<iostream>


class Matrix {

  private:

    int rows, columns;

    std::vector< std::vector<int> > v;

	public:

		Matrix(int r, int c);
    Matrix( const Matrix &m);
    ~Matrix();

    void print();
    void add(const Matrix& a, const Matrix& b);
    void mult(const Matrix& a, const Matrix& b);
    void transpose(Matrix& m);

    Matrix operator+(const Matrix& that) const;
    Matrix operator*(const int);
    friend ostream& operator<< (ostream& strm, const Matrix& m);


};


ostream& operator<< (ostream& strm, const MyClass& m) {
  strm << "[" << m.a << "]";
  return strm;
}

#endif
