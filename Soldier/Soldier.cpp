#include"Soldier.hpp"

Soldier::Soldier(std::string name, int force) : baseName(name), strength(force)
{
}

Soldier::~Soldier()
{
}
Soldier::Soldier() : baseName("unknown"), strength(0)
{
}

Soldier * createArmy(int N, std::string baseName)
{
	Soldier* army= new Soldier[N];
	std::srand(std::time(0));
	for(int i = 0; i < N; ++i)
	{
		std::stringstream ss;
		ss << (i + 1);
		std::string si=ss.str();
		std::string namearmy = baseName +"_"+si;
		int force = rand() % 100; 
		army[i] = Soldier(namearmy, force);
	}
	return(army);
}
void Soldier::display(void)
{
	std::cout << "nom:" << baseName << "\tforce:" << strength << std::endl;
}

int Soldier::getStrength(void) const
{
	return(strength);
}

int totalStrenght(Soldier *army, int N )
{
	int total = 0;
	for(int i = 0; i < N; ++i)
	{
		total += army[i].getStrength();
	}
	return(total);
}
int main(void)
{
	Soldier *Bigarmy;
	int N = 10;
	Bigarmy = createArmy(N, "Poilus");
	for(int i=0; i < N; ++i)
	{
		Bigarmy[i].display();

	}
	int total=totalStrenght(Bigarmy, N);
	std::cout << "total force= " << total << std::endl;
	delete[] Bigarmy;
	return(0);

}