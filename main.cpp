#include "Matrix.h"



/* run this program using the console pauser or add your own getch, system("pause") or input loop */



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
	
	return 0;	

}
