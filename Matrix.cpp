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

void *Matrix::addMatrix(Matrix matrix)
{
	int r = matrix.getNumCol();
	int c = matrix.getNumRow();
	
	if(this->getNumCol() != r || this->getNumRow() != c)
	{
		std::cout<<"Lo siento hermano pero no puedo, peaso mierda"<<std::endl;
	}
	else
	{
		for(int i = 0; i < this->m_x; i++)
		{		
			for(int j = 0; j < this-> m_y; j++)
			{
				double sum = this->getValue(i,j) + matrix.getValue(i,j);			
				
				this->setValue(i,j,sum);
			}
		}		
	}	
}


void *Matrix::subtractMatrix(Matrix matrix)
{
	int r = matrix.getNumCol();
	int c = matrix.getNumRow();
	
	if(this->getNumCol() != r || this->getNumRow() != c)
	{
		std::cout<<"Matrix has to be of the same order to be able to subtract them"<<std::endl;
	}
	else
	{
		for(int i = 0; i < this->m_x; i++)
		{	
			for(int j = 0; j < this-> m_y; j++)
			{
				double sub = this->getValue(i,j) - matrix.getValue(i,j);			
				
				this->setValue(i,j,sub);
			}
		}		
	}	
}

void *Matrix::multiply(double x)
{
	
	for(int j = 0; j < this-> m_y; j++)	
	{		
		for(int i = 0; i < this->m_x; i++)
		{
			double mult = this->getValue(i,j) * x;			
				
			this->setValue(i,j,mult);
		}
	}		
}

Matrix *Matrix::dotProduct(Matrix matrix)
{
	int r = matrix.getNumCol();
	int c = matrix.getNumRow();
	
	Matrix *m = new Matrix(this->m_x, c,false);
	
	double mult = 0.0;
	
	if(this->getNumCol() != r)
	{
		std::cout<<"Cannot realize de dotProduct due to differences between the cols and rows of the matrixes"<<std::endl;
		return m;
	}
	else
	{
		
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
