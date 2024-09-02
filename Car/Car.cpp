
#include"Car.hpp"

Car::Car():model("unknown"),year(0)
{}

Car::Car(std::string modelcar, int yearcar):model(modelcar), year(yearcar)
{}
Car::~Car()
{}

void Car::DisplaysStock(Car *stock, int N)
{
	for(int i=0; i < N; ++i)
	{
		std::cout << "voiture numero " << i+1 << "\t";
		std::cout << "model:\t"<< stock[i].model;
		std::cout << "\tyear:\t" << stock[i].year << std::endl;
	}
}
void Car::setValue(std::string modelcar, int yearcar)
{
	model=modelcar;
	year=yearcar;
}

int Car::getValueYear(void)
{
	return(year);
}