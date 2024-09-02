#include "Car.hpp"

Car *createFleet(int N)
{
	Car *stock = new Car[N];

	for (int i=0; i < N; ++i)
	{
		std::string strmod, stryear;
		std::cout << "entrer le model du vehicule:"<< std::endl;
		std::getline(std::cin, strmod);
		std::cout << "entrer l annee du vehicule" << std::endl;
		std::getline(std::cin, stryear);
		int yearmod;
		std::istringstream(stryear) >> yearmod;
		stock[i]=Car(strmod, yearmod);
		
	}
	return(stock);

}
int meanAge(Car *stock, int N)
{
	int totl = 0;
	for(int i=0; i < N; ++i)
	{
		totl += stock[i].getValueYear();
	}
	int mean = totl / N;
	return(mean);
}

int main(void)
{
	Car *myStock;
	std::cout << " entrer le nombre de vehicule:" << std::endl;
	std::string strnb;
	std::getline(std::cin, strnb);
	int N;
	std::istringstream(strnb) >> N;
	myStock=createFleet(N);
	myStock->DisplaysStock(myStock, N);
	std::cout << "MeanAge= " << meanAge(myStock, N) << std::endl;
	delete[] myStock;

	return(0);

}