
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

void Book::setpara(std::string titre, int pags) 
{
	title = titre;
	pages = pags;
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
	std::cout << "\tTitre du livre:\t" << title ;
	std::cout << "\tnombre de pages:\t" << pages << std::endl;
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
		str2="";
		while(!std::cin.eof() && str2=="")
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
		inventory[i].setpara(str1, numpages);
	}
	return(inventory);
}
void DisplayAllBook(Book *stock, int N)
{
	for(int i=0; i<N; ++i)
	{
		std::cout << "position du livre \t" << (i+1) ;
		stock[i].DisplayBook();
	}
}