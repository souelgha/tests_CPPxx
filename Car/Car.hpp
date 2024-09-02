#ifndef CAR_H
	#define CAR_H

#include<iostream>
#include<string>
#include<sstream>

class Car
{
	private:
		std::string model;
		int year;
	
	public:
		Car();
		Car(std::string modelcar, int yearcar);
		~Car();
		void DisplaysStock(Car *stock, int N);
		void setValue(std::string modelcar, int yearcar);
		int getValueYear(void);

};

Car *createFleet(int N);
int meanAge(Car *stock, int N);

#endif