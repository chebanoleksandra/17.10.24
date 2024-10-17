#include <iostream>
#include "Movie.h"
using namespace std;


int main() {
	/*Movie obj1("Little Women", 2.15, 2019);
	obj1.Print();*/

	Movie arr[3]{ {"Little Women", 2.15, 2019, "Greta Gerwig", "Drama", "25.12.2019"}, {"The Lord of the Rings: The Fellowship of the Ring", 2.58, 2001, "Peter Jackson", "Action", "10.12.2001"}, {"Cruella", 2.14, 2021, "Craig Gillespie", "Adventure", "28.05.2021"} };
	for (int i = 0; i < 3; i++)
	{
		arr[i].Print();
	}

	/*Movie* arrptr[2]{ new Movie("Little Women", 2.15, 2019, "Greta Gerwig", "Drama", "25.12.2019"), new Movie("The Lord of the Rings: The Fellowship of the Ring", 2.58, 2001, "Peter Jackson", "Action", "10.12.2001") };
	for (int i = 0; i < 2; i++)
	{
		arrptr[i]->Print();
	}
	for (int i = 0; i < 2; i++)
	{
		delete arrptr[i];
	}*/
}