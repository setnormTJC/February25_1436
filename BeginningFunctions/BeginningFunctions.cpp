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
		std::cout << nums[i] << "\n";
	}
}
int main()
{
	std::vector<int> nums = { 8, 6, 7, 5, 3, 0, 9 }; //a vector is a LIST 

	//requires <algorithm> header file: 
	std::random_shuffle(nums.begin(), nums.end()); //let's just not worry about "begin" and "end" things for now

	printListContents(nums); 


	//using namespace MySpecialSpace; 

	//std::cout << a << "\n"; //WILL work!
	//std::cout << "hello world";

	//doSomething(); 

	//int a; 
	//int a; 

	//"call the `showVideoOfCat` function: 
	//showVideoOfCat();


	return 0; 
	
}
