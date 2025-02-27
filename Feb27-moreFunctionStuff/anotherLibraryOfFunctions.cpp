#include"anotherLibraryOfFunctions.h"

void MySpace::doA()
{
	std::cout << "Doing A and calling `doB()`\n";
	doB();
}

void MySpace::doB()
{
	std::cout << "Doing thing B\n";
}

void MySpace::swap(std::string myPositionInTheRace, std::string yourPositionInTheRace)
{
	std::string temporary = myPositionInTheRace;


	myPositionInTheRace = yourPositionInTheRace; 

	yourPositionInTheRace = temporary; 


	std::cout << "Now, your position is: " << yourPositionInTheRace << "\n";
	std::cout << "And MY position is: " << myPositionInTheRace << "\n";
}
