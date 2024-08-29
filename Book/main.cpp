
#include "Book.hpp"

int main(void)
{
	std::cout << "combien de livres : " << std::endl;
	std::string str;
	int N;
	std::getline(std::cin, str);
	std::istringstream(str) >> N;

	Book *stock=createLibrary(N);
	DisplayAllBook(stock, N);

	delete[] stock;
	return(0);
}
