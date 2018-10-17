#ifndef _MATRIX_H
#define _MATRIX_H

#include <iostream>
#include <vector>
#include <stdlib.h>

class Matrix
{
	public:
		
		Matrix();
		Matrix(std::vector < std::vector<double> > vals);
		Matrix(int r, int c, bool rand);
		
		double getValue(int r, int c);
		int getCol(){return this->m_y;}
		int getRow(){return this->m_x;}
		
		void setValue(int r, int c, double val);
		Matrix* transpose();
		void print();
		
	private:
		
		int m_x;
		int m_y;
		std::vector < std::vector<double> > m_vals;
};

#endif
