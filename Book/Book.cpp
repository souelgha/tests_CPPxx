
#include"Book.hpp"

Book::Book(): title("unknown"), pages(0)
{
}
Book::Book(std::string titre, int pags): title(titre), pages(pags)
{
}

Book::~Book(void)
{
}

void Book::setTittle(std::string titre)
{
	this->title = titre;
}

void Book::setPages(int pags)
{
	this->pages = pags;
}

std::string Book::getTittle(void)
{
	return(this->title);
}

int Book::getPages(void)
{
	return(this->pages);
}

void Book::DisplayBook(void)
{
	std::cout << "\tTitre du livre:\t" << Book::getTittle() ;
	std::cout << "\tnombre de pages:\t" << Book::getPages() << std::endl;
}

Book *createLibrary(int N)
{
	Book *inventory= new Book[N];

	std::string str1, str2;
	int numpages;
	str1="", str2="";
	std::cout << "le nombre de livres a mettre en stock est : " << N << std::endl;
	for(int i = 0; i < N; ++i)
	{
		
		std::cout << "Entrez le titre du livre numero "<< (i + 1) << std::endl;
		std::getline(std::cin, str1);
		while(str2=="")
		{
			std::cout << "Entrez le nombre de pages du livre:" << std::endl;
			std::getline(std::cin, str2);
			for(size_t j=0; j < str2.length(); ++j)
			{
				if(!std::isdigit(str2[j]))
				{
					std::cout << "ERROR : entrer un nombre entier" << std::endl;
					str2="";
					break;
				}
			}
			
		}
		std::istringstream(str2) >> numpages;
		inventory[i]= Book(str1, numpages);
		str2="";
	}
	return(inventory);
}