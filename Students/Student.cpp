
#include"Student.hpp"

Student::Student():name("unkown"), grade(0.0) {}
Student::Student(std::string studname, double level) : name(studname), grade(level) {}
Student::~Student(){};

// void Student::getStudent(std::string studname, double level)
// {
// 	name=studname;
// 	grade = level;
// }

double Student::getNote(void)
{
	return(this->grade);
}

std::string Student::getName(void)
{
	return(this->name);
}

void Student::displays(void)
{
	std::cout << "nom de l eleve :" << Student::getName() << "\t";
	std::cout << "note de l eleve :" << Student::getNote() << std::endl;
}