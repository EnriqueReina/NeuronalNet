#include "Matrix.h"

double random()
{
	 return ((double) rand() / (RAND_MAX));
}

Matrix::Matrix()
{
	this->m_x = 0;
	this->m_y = 0;	
}

Matrix::Matrix(int r, int c, bool rand)
{
	this->m_x = r;
	this->m_y = c;
	
	for(int i = 0; i < this->m_x; i++)
	{
		std::vector <double> val;
		for(int j = 0; j < this->m_y; j++)
		{
			if(!rand)
				val.push_back(0.0);
			else
			{
				double r = random();
				val.push_back(r);
			}
		}
		
		this->m_vals.push_back(val);
	}
}

void Matrix::setValue(int r, int c, double val)
{
	this->m_vals.at(r).at(c) = val;
}

double Matrix::getValue(int r, int c)
{
	return m_vals.at(r).at(c);
}

Matrix *Matrix::transpose()
{
	Matrix *m = new Matrix(this->m_y, this->m_x,false);
	
	for(int i = 0; i < m->m_y; i++)
	{		
		for(int j = 0; j < m->m_x; j++)
		{
			m->setValue(j,i, this->getValue(i,j));
		}	
	}
	
	return m;
}

void Matrix::print()
{
	for(int i = 0; i < m_x; i++)
	{		
		for(int j = 0; j < m_y; j++)
		{
			std::cout<<m_vals.at(i).at(j)<< "  ";
		}
		std::cout<<std::endl;	
	}
}

