#ifndef MATRIX_HPP
#define MATRIX_HPP

#include<iostream>


class Matrix {

  private:

    int rows, columns;

	public:

    std::vector< std::vector<int> > v;

		Matrix(int r, int c);
    Matrix( const Matrix &obj);
    ~Matrix();

    void print();
    void add(const Matrix& a, const Matrix& b);
    void mult(const Matrix& a, const Matrix& b);
    void transpose(Matrix& m);

    Matrix operator+(const Matrix& that) const;     // + (addition)
    Matrix operator*(const int);     // * (scalar multiplication)

    friend ostream& operator<< (ostream& strm, const Matrix& m);


};


ostream& operator<< (ostream& strm, const MyClass& m) {
  strm << "[" << m.a << "]";
  return strm;
}

#endif
