// BeginningFunctions.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>



/*
* DOXYGEN -> a documentation style 
* @param x -> the input
*/
int calculateXSquaredPlus2(int x) 
{
	int y = x * x + 2; 

	return y; 
}

void showVideoOfCat()
{
	system("prayKitty.mp4");
}

int main()
{
	//remember "early return" (ex: if an input file is not found...)


	//"call the `showVideoOfCat` function: 
	showVideoOfCat();


	//int x = 5; 

	//for (int x = -10; x <= 10; ++x) //this will run 20 times 
	//{
	//	int y = calculateXSquaredPlus2(x); 

	//	std::cout << x << " squared plus 2 = " << y << "\n";
	//}


	return 0; 
	
}
