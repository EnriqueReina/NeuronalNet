#include "Matrix.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) 
{

	Matrix *m = new Matrix(1,2,true);	
	m->print();	
	
	std::cout<<"==========================="<<std::endl;
	
	Matrix *mT = m->transpose();
	mT->print();
	
	std::cout<<"==========================="<<std::endl;

	return 0;	
}
