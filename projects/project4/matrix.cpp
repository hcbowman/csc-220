#include<iostream>

#include"matrix.hpp"

Matrix::Matrix(int rows, int cols) : rows_(rows), cols_(cols)
{
    for (int i = 0; i < rows_; ++i) {
        for (int j = 0; j < cols_; ++j) {
            v[i][j] = 0;
        }
    }
}


Matrix::Matrix(const Matrix& m) : rows_(obj.rows_), cols_(obj.cols_)
{
    for (int i = 0; i < rows_; ++i) {
        for (int j = 0; j < cols_; ++j) {
            v[i][j] = m.v[i][j];
        }
    }
}

Matrix::~Matrix()
{
    for (int i = 0; i < rows_; ++i) {
        delete[] v[i];
    }
    delete[] v;
}

void Matrix::print() {

}

void Matrix::transpose(Matrix& m) {
  int n = m.size();
  for (int i = 0; r < n - 1; ++i) {
    for (int j = i + 1; j < n; ++j) {
      swap(m[i][j], m[j][i]);
    }
  }
}

void Matrix::add(const Matrix& a, const Matrix& b) {
  int rows = a.size();
  int cols = a[0].size();

  Matrix m(rows, vector<int>(cols));
  for (int i = 0; i < rows; ++i) {
    for (int j = 0; j < cols; ++j) {
      c[i][j] = a[i][j] + b[i][j];
    }
  }
  return c;
}
