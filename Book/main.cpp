
#include "Book.hpp"

int main(void)
{
	int N=3;
	Book *stock=createLibrary(N);
	for(int i=0; i<N; ++i)
	{
		std::cout << "position du livre \t" << (i+1) ;
		stock[i].DisplayBook();
	}

	delete[] stock;
}

//faire un check du digit pour le nombre de pages