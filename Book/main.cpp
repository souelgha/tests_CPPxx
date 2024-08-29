
#include "Book.hpp"

int main(void)
{
	int N=5;
	Book *stock=createLibrary(N);
	for(int i=0; i<N; ++i)
	{
		std::cout << "classement du livre \t" << (i+1) ;
		stock[i].DisplayBook();
	}

	delete[] stock;
}