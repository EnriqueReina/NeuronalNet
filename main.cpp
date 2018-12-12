#include "Matrix.h"

int main(int argc, char** argv) 
{
	Matrix *m = new Matrix(3,4,true);
	Matrix *m2 = new Matrix(3,4,true);	
	Matrix *mT = m->transpose();
	
	std::cout<<"Matriz m: "<<std::endl;
	
	m->print();	

	std::cout<<"==========================="<<std::endl;
	
		std::cout<<"\nMatriz m2: "<<std::endl;
	
	m2->print();
	
	std::cout<<"==========================="<<std::endl;
	
		std::cout<<"\nMatriz mT: "<<std::endl;
	
	mT->print();

	std::cout<<"==========================="<<std::endl;
	
	std::cout<<"\nMatriz suma a m, m2: "<<std::endl;

	m->addMatrix(*m2);
	m->print();
	
	std::cout<<"==========================="<<std::endl;
	
	std::cout<<"\nMatriz resta a m, m2: "<<std::endl;

	m->subtractMatrix(*m2);
	m->subtractMatrix(*m2);
	m->print();
	
	std::cout<<"==========================="<<std::endl;
	
	std::cout<<"\nMatriz suma a m, m2: "<<std::endl;

	m->multiply(2.0);
	m->print();
	
	std::cout<<"==========================="<<std::endl;
	
	std::cout<<"\nMatriz producto escalar de m3 con m4: "<<std::endl;

	Matrix *m3 = new Matrix(3,3,true);
	Matrix *m4 = new Matrix(3,4,true);
	
	Matrix *mdt = m3->dotProduct(*m4);
	
	mdt->print();
	
	
	return 0;	

}
