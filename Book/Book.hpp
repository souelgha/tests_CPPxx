#ifndef BOOK_H
	#define BOOK_H

#include<iostream>
#include<string>
#include<sstream>

class Book
{
	private :
		std::string title;
		int pages;
	public :
		Book();
		Book(std::string titre, int pags);
		~Book();
		void setTittle(std::string titre);
		void setPages(int pags);
		std::string getTittle(void);
		int getPages(void);
		void DisplayBook(void);
};

Book *createLibrary(int N);

#endif
