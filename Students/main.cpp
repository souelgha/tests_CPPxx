
#include"Student.hpp"


Student *createClass(int N)
{
	Student *school = new Student[N];
	for(int i=0; i < N; ++i)
	{
		std::cout << "nom de l etudiant " << std::endl;
		std::string nom, strnote;
		std::getline(std::cin, nom);
		std::cout << "entrer la note" << std::endl;
		std::getline(std::cin, strnote);
		double note;
		std::istringstream(strnote) >> note;
		school[i] = Student(nom, note);

	}
	return(school);
}
/*afficher la calculer la moyenne des notes*/
void meanLevel(Student *school, int N)
{
	double tot=0;
	for(int i = 0; i < N; ++i)
	{
		tot += school[i].getNote();
	}
	std::cout << "la moyenne est : " << tot/N << std::endl;
}

Student BestStud(Student *school, int N)
{
	Student Best = school[0];
	std::string findName="unknown";
	for (int i = 0; i < N; ++i)
	{
		if(school[i].getNote() > Best.getNote() )
		 {
			Best =school[i];			
		 }
	}
	return(Best);
}
int main()
{
	Student *college;

	std::cout << "entrer le nombre d eleves" << std::endl;
	std::string strnb;
	std::getline(std::cin, strnb);
	int nb;
	std::istringstream(strnb) >> nb;
	college=createClass(nb);
	for (int i = 0; i < nb; ++i)
	{	
		college[i].displays();
	}
	meanLevel(college, nb);	
	std::cout << "le meilleur eleve est : " << BestStud(college, nb).getName() << "\t";
	std::cout << " sa note est de : " << BestStud(college, nb).getNote() << std::endl;
	delete[] college;
	return(0);
}