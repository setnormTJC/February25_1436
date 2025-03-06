// Feb27-moreFunctionStuff.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include"anotherLibraryOfFunctions.h"

void demoSHALLOWCopying()
{
	int a = 123;

	int SHALLOWcopyOfA = a;

	std::cout << "a (the 'original' variable) is: " << a << "\t AND the SHALLOW copy is: " << SHALLOWcopyOfA << "\n";

	a = 12'435'455;
	//SHALLOWcopyOfA = a; //a whole other operation the computer has to do!

	std::cout << "NOW, after updating the value of a - we have:\n";
	std::cout << "a (the 'original' variable) is: " << a << "\t AND the SHALLOW copy is: " << SHALLOWcopyOfA << "\n";

}

void demoDEEPCopying()
{
	int a = 123;

	int & DEEPcopyOfA = a; //the variable named DEEPcopyOfA is called a "reference variable"

	std::cout << "a (the 'original' variable) is: " << a << "\t AND the DEEP copy is: " << DEEPcopyOfA << "\n";

	a = 12'435'455;
	//SHALLOWcopyOfA = a; //a whole other operation the computer has to do!

	std::cout << "NOW, after updating the value of a - we have:\n";
	std::cout << "a (the 'original' variable) is: " << a << "\t AND the DEEP copy is: " << DEEPcopyOfA << "\n";

}

int main()
{

	//demoDEEPCopying(); //magic!

	//MySpace::doA(); 

	std::string myPositionInTheRace = "first place"; 
	std::string yourPositionInTheRace = "SECOND place";

	MySpace::swapOurPositionInTheRace(myPositionInTheRace, yourPositionInTheRace); 

	std::cout << "\n\nNow, we are back in the MAIN function ... AND the values of our positions are:\n";

	std::cout << "Myposition: " << myPositionInTheRace << "\tYour position: " << yourPositionInTheRace << "\n";
 



}

