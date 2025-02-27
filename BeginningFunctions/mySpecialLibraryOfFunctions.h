#pragma once //what is this???
#include <iostream>

namespace LibrarySpace
{
	int measuredBloodGlucoseLevel()
	{
		std::cout << "Enter your blood glucose concentration (in units milligrams per deciliter - mg/dL):\n";
		int bloodGlucoseConcentration;

		std::cin >> bloodGlucoseConcentration;

		return bloodGlucoseConcentration;
	}

	void analyseBloodGlucoseLevel(int bloodGlucoseConcentration)
	{
		if (bloodGlucoseConcentration > 300)
		{
			std::cout << "That is DANGEROUSLY high (hyperglycemia):\n";
			//return "Too high";//don't do this! return (function type) is VOID (nothing)
		}

		else if (bloodGlucoseConcentration > 140)
		{
			std::cout << "That is high\n";
		}

		else if (bloodGlucoseConcentration > 90)
		{
			std::cout << "That is fairly normal\n";
		}

		else //bloodGlucoseConcentration < 90 (HYPO-glycemia)
		{
			std::cout << "THat is low\n";
		}


	}

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
}