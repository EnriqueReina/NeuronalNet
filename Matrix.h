#ifndef _MATRIX_H
#define _MATRIX_H

#include <iostream>
#include <vector>
#include <stdlib.h>

class Matrix
{
	public:
		
		//constructors
		Matrix();
		Matrix(std::vector < std::vector<double> > vals);
		Matrix(int r, int c, bool rand);

		//getters
		double getValue(int r, int c){return m_vals.at(r).at(c);}
		int getNumCol(){return this->m_y;}
		int getNumRow(){return this->m_x;}

		//setters
		void setValue(int r, int c, double val);
		
		
		//operation
		void* addMatrix(Matrix m);
		void* subtractMatrix(Matrix m);
		void* multiply(double x);
		Matrix* dotProduct(Matrix m);
		Matrix* transpose();
		
		
		//print
		void print();

	private:

		int m_x;
		int m_y;
		std::vector < std::vector<double> > m_vals;
};

#endif
