#ifndef STUDENT_H
	#define STUDENT_H

#include<iostream>
#include<sstream>
#include<string>

class Student
{
	private :
		std::string name;
		double grade;
	
	public :
		Student();
		Student(std::string studname, double level);
		~Student();
		//void getStudent(std::string studname, double level);
		double getNote(void);
		std::string getName(void);
		void displays(void);
};

Student *createClass(int N);
void meanLevel(Student *school, int N);
Student BestStud(Student *school, int N);

#endif