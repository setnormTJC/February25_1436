// BeginningFunctions.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include<algorithm> 
#include <iostream>
#include "mySpecialLibraryOfFunctions.h"
#include <vector>
//using namespace std;



//using namespace std; 

namespace MySpecialSpace
{
	int a = 31; 
}


void printListContents(std::vector<int> nums)
{
	for (int i = 0; i < nums.size(); ++i) //size means the number of things in the list 
	{
		std::cout << nums[i] << "\n"; //the [] means "index of"
	}
}

void demoRandomShufflingOfAnArray()
{
	std::vector<int> nums = { 1, 2, 3, 4, 5, 6, 7, 8 }; //a vector is a LIST 

	//requires <algorithm> header file: 
	std::random_shuffle(nums.begin(), nums.end()); //let's just not worry about "begin" and "end" things for now

	printListContents(nums);
}

int main()
{

	int bloodGlucoseConcentration = LibrarySpace::measuredBloodGlucoseLevel();

	LibrarySpace::analyseBloodGlucoseLevel(bloodGlucoseConcentration);

	//std::cout << "You said your blood glucose concentration = " << bloodGlucoseConcentration << " mg/dL\n";

	

	//using namespace MySpecialSpace; 

	//std::cout << a << "\n"; //WILL work!
	//std::cout << "hello world";

	//doSomething(); 

	//int a; 
	//int a; //this generates a "variable redefinition error" (this relates to #pragma once at top of header file)

	//"call the `showVideoOfCat` function: 
	//showVideoOfCat();


	return 0; 
	
}
