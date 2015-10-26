#include <iostream>
int main()
{
	int year;
	while(std::cin>>year)
	{
		if(year % 4 == 0 && year % 100 != 0)
			std::cout<<"閏年"<<std::endl;
		else if(year%400 == 0)
			std::cout<<"閏年"<<std::endl;
		else
			std::cout<<"平年"<<std::endl;
	}
}