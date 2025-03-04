#include"anotherLibraryOfFunctions.h"

void MySpace::doA()
{
	//this, in the braces, is a function DEFINITION 
	std::cout << "Doing A and calling `doB()`\n";
	doB();
}

void MySpace::doB()
{
	std::cout << "Doing thing B\n";
}


void MySpace::swapOurPositionInTheRace(std::string& myPositionInTheRace, std::string& yourPositionInTheRace)
{
	std::cout << "This is a line at the BEGINNING of the `swap` function.\n";

	std::string temporaryCopy = myPositionInTheRace;


	myPositionInTheRace = yourPositionInTheRace; 

	yourPositionInTheRace = temporaryCopy; 


	std::cout << "Now, your position is: " << yourPositionInTheRace << "\n";
	std::cout << "And MY position is: " << myPositionInTheRace << "\n";


	std::cout << "This is a line at the END of the `swap` function.\n";
}
