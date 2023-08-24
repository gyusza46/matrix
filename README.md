# Matrix Operations Library

This repository contains a C++ library that provides a `Matrix` class capable of various matrix operations. The library includes methods for matrix initialization, scalar multiplication, matrix multiplication, element-wise addition and subtraction, as well as matrix comparison.

## `matrix.cpp`

This file contains the implementation of the `Matrix` class methods. Below is a brief overview of the methods defined in this file:

- **Constructor**: Initializes the `Matrix` object with an empty vector of vectors.

- **set**: Sets the matrix values based on the provided vector of vectors.

- **display**: Displays the matrix elements in a readable format.

- **mul**: Performs scalar multiplication on the matrix by a given constant.

- **mul(const Matrix& m)**: Performs matrix multiplication between two matrices. It returns the resulting matrix if the dimensions are valid, otherwise, it outputs an error message.

- **operator+**: Overloaded addition operator for element-wise matrix addition.

- **operator-**: Overloaded subtraction operator for element-wise matrix subtraction.

- **operator*(int c, const Matrix& m)**: Overloaded multiplication operator for scalar multiplication.

- **operator*(const Matrix& m)**: Overloaded multiplication operator for matrix multiplication. Similar to the previous `mul` method.

- **operator==**: Overloaded equality operator to check if two matrices are equal element-wise.

- **operator!=**: Overloaded inequality operator to check if two matrices are not equal element-wise.

## `matrix.h`

This header file defines the `Matrix` class and its public methods. Below is a brief summary of the class and its methods:

- **Constructor**: Initializes the `Matrix` object with an empty matrix or the provided matrix if given.

- **set**: Sets the matrix values based on the provided vector of vectors.

- **display**: Displays the matrix elements in a readable format.

- **mul**: Declares the method for scalar multiplication on the matrix.

- **mul(const Matrix& m)**: Declares the method for matrix multiplication.

- **operator+**: Declares the method for element-wise matrix addition.

- **operator-**: Declares the method for element-wise matrix subtraction.

- **operator***: Declares the method for matrix multiplication.

- **operator==**: Declares the method for checking equality between matrices.

- **operator!=**: Declares the method for checking inequality between matrices.

- **friend operator***: Declares the friend method for scalar multiplication with reversed order.
