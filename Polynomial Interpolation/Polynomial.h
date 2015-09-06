#ifndef POLYNOMIAL_H
#define POLYNOMIAL_H

#include <fstream>
#include <iostream>
#include <string>

using namespace std;

class Polynomial {
private:
	struct Matrix {								 // Used to store the augmented matrix for the data set.
		float *column;
		const float& operator[](int index) const {			 // Overloaded [] operator for const r-value access.
			return this->column[index];
		}
		float& operator[](int index) {					 // Overloaded [] operator for l-value access.
			return this->column[index];
		}
	};
	Matrix *matrix;								 // The augmented matrix.
	int n;									 // The number of data points (= degree of polynomial).
	void Gauss();								 // Performs Gaussian elimination on the augmented matrix.
	void Jordan();								 // Converts the REF Matrix obtained from Gauss() to RREF.
public:
	Polynomial(string);							 // Gets the data set from the filename (string) and generates the augmented matrix.
	friend ostream& operator<<(ostream&, const Polynomial&);                 // To output the matrix.
};

#endif