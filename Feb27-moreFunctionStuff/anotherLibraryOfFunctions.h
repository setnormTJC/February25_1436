#pragma once
#include <iostream>
#include <string>

namespace MySpace
{
	//std::string myOneAndOnlyFriend = "Tom";


	void doA(); //a function "declaration" (not a definition)
	void doB(); //THIS is called a function "declaration" (or prototype) 

	void swapOurPositionInTheRace(std::string& myPositionInTheRace, std::string& yourPositionInTheRace);
	
	//void foo();  //these "toy" function names are common, but I don't like 'em!
	//void bar(); 
	//void baz(); 
}


