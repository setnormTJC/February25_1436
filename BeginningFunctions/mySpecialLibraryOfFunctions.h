#pragma once //what is this???
#include <iostream>


void doSomething() //parentheses indicate that this is a function
{
	//this is called the definition/body of the function 
	//it is where the action be!

	std::cout << "Doing something ...\n"; //vaguely ominous
	//what IS it doing? 
}

/*
* DOXYGEN -> a documentation style
* @param x -> the input
*/
int calculateXSquaredPlus2(int x)
{
	int y = x * x + 2;

	return y;
}

void demoCallingXSquaredPlus2()
{
	int x = 5;

	for (int x = -10; x <= 10; ++x) //this will run 20 times 
	{
		int y = calculateXSquaredPlus2(x);

		std::cout << x << " squared plus 2 = " << y << "\n"; //asdfadsfasdf adsfadsflasfdkalfiksaldfkaldskf
	}
}

void showVideoOfCat()
{
	system("prayKitty.mp4");
}