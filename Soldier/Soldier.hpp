#ifndef SOLDIER_H
	#define SOLDIER_H

#include<iostream>
#include<string>
#include<cstdlib>
#include<sstream>
#include<ctime>

class Soldier
{
private:
	std::string baseName;
	int strength;
	

public:
	Soldier();
	Soldier(std::string name, int force);
	~Soldier();
	void display(void);
	int getStrength(void) const;

	
};

Soldier *createArmy(int N, std::string baseName);
int totalStrenght(Soldier *army, int N );

#endif
