#ifndef MATRIX_H
#define MATRIX_H


class Matrix
{
public:

  Matrix();
  Matrix(std::vector<std::vector<int>> m) : numbers(m) {};

  void set(std::vector<std::vector<int>> m);
  void display() const;

  Matrix mul(int c) const;
  Matrix mul(const Matrix& m) const;
  Matrix operator+(const Matrix& m) const;
  Matrix operator-(const Matrix& m) const;
  Matrix operator*(const Matrix& m) const;
  bool operator==(const Matrix& m) const;
  bool operator!=(const Matrix& m) const;
  friend Matrix operator*(int c, const Matrix& m);

private:

  std::vector<std::vector<int>> numbers;

};
#endif

