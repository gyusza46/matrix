#include <iostream>
#include <vector>
#include "matrix.h"

Matrix::Matrix()
{
  numbers = {};
}
void Matrix::set(std::vector<std::vector<int>> m)
{
  this->numbers = m;
}

void Matrix::display() const
{
  for(int i = 0; i<numbers.size(); ++i)
  {
    for(int j = 0; j<numbers[i].size(); j++)
    {
      std::cout << numbers[i][j] << " ";
    }
    std::cout << std::endl;
  }
}
Matrix Matrix::mul(int c) const
{
  Matrix res;
  for(int i = 0; i<numbers.size(); i++)
  {
    std::vector<int> column;
    for(int j = 0; j<numbers[i].size(); j++)
    {
      column.push_back(c*numbers[i][j]);
    }
    res.numbers.push_back(column);
  }
  return res;
}
Matrix Matrix::mul(const Matrix& m) const
{
  std::vector<std::vector<int>> prod;
  std::vector<std::vector<int>> temp = m.numbers;
  int m1 = numbers.size();
  int n1 = numbers[0].size();
  int m2 = temp.size();
  int n2 = temp[0].size();
  if(n1==m2)
  {
    for(int i = 0; i<m1; i++)
    {
      std::vector<int> column;
      for(int j = 0; j<n2; j++)
      {
        int s = 0;
        for(int k = 0; k<m2; k++)
        {
          s = s+numbers[i][k]*temp[k][j];
        }
        column.push_back(s);
      }
      prod.push_back(column);
    }
    return prod;
  }
  else
  {   std::cout << "Invalid matrix dimensions";
    prod = {};
    return prod;
  }
}
Matrix Matrix::operator+(const Matrix& m) const
{
  Matrix res;
  std::vector<std::vector<int>> temp = m.numbers;
  for(int i = 0; i<numbers.size(); i++)
  {
    std::vector<int> column;
    for(int j = 0; j<numbers[0].size(); j++)
    {
      column.push_back(numbers[i][j]+temp[i][j]);
    }
    res.numbers.push_back(column);
  }
  return res;
}
Matrix Matrix::operator-(const Matrix& m) const
{
  Matrix res;
  std::vector<std::vector<int>> temp = m.numbers;
  for(int i = 0; i<numbers.size(); i++)
  {
    std::vector<int> column;
    for(int j = 0; j<numbers[0].size(); j++)
    {
      column.push_back(numbers[i][j]-temp[i][j]);
    }
    res.numbers.push_back(column);
  }
  return res;
}
Matrix operator*(int c,const Matrix& m)
{
  Matrix res;
  for(int i = 0; i<m.numbers.size(); i++)
  {
    std::vector<int> column;
    for(int j = 0; j<m.numbers[i].size(); j++)
    {
      column.push_back(c*m.numbers[i][j]);
    }
    res.numbers.push_back(column);
  }
  return res;
}

Matrix Matrix::operator*(const Matrix& m) const
{
  std::vector<std::vector<int>> prod;
  std::vector<std::vector<int>> temp = m.numbers;
  int m1 = numbers.size();
  int n1 = numbers[0].size();
  int m2 = temp.size();
  int n2 = temp[0].size();
  if(n1==m2)
  {
    for(int i = 0; i<m1; i++)
    {
      std::vector<int> column;
      for(int j = 0; j<n2; j++)
      {
        int s = 0;
        for(int k = 0; k<m2; k++)
        {
          s = s+numbers[i][k]*temp[k][j];
        }
        column.push_back(s);
      }
      prod.push_back(column);
    }
    return prod;
  }
  else
  {   std::cout << "Invalid matrix dimensions";
    prod = {};
    return prod;
  }
}

bool Matrix::operator==(const Matrix& m) const
{
  bool res = true;
  int i = 0;
  while(res && i<numbers.size())
  {
    int j = 0;
    while(res && j<numbers[i].size())
    {
      if(numbers[i][j] != m.numbers[i][j])
      {
        res = false;
      }
      j = j+1;
    }
    i = i+1;
  }
  return res;
}

bool Matrix::operator!=(const Matrix& m) const
{
  bool res = false;
  int i = 0;
  while(!res && i<numbers.size())
  {
    int j = 0;
    while(!res && j<numbers[i].size())
    {
      if(numbers[i][j] != m.numbers[i][j])
      {
        res = true;
      }
      j = j+1;
    }
    i = i+1;
  }
  return res;
}