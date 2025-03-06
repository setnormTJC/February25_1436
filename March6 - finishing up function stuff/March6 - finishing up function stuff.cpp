// March6 - finishing up function stuff.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include<chrono>
#include <iostream>

/*
* @param a -> it is passed BY REFERENCE (not the ampersand symbol usage)
*/
auto changeInputToSomethingDifferent(int& a)
{
    a = 999;
}
void demoIsDigit()
{
    char digit = '5';
    if (isdigit(digit))
    {
        std::cout << "It is INDEED a digit\n";
    }

    else
    {
        std::cout << "It AIN'T a digit\n";
    }
}


void demoAuto()
{
    auto a = 123;

    std::cout << "The data type of a was DEDUCED AUTOMATICALLY as: "
        << typeid(a).name() << "\n";

    changeInputToSomethingDifferent(a);


    std::cout << "After calling the function, we have a = " << a << "\n";

}
int main()
{
    using namespace std::chrono; 

    int numberToCountTo = 1'000'000'000; 

    std::cout << "How long does it take for my computer to count to " << numberToCountTo << "?\n";

    auto startTime = high_resolution_clock::now(); 

    for (int i = 0; i <= numberToCountTo; ++i)
    {
        //if (i > 990'000) std::cout << i << "\n";
    }

    auto endTime = high_resolution_clock::now(); 

    std::cout.imbue(std::locale(""));

    std::cout << (endTime - startTime).count() << " NANOSECONDs\n";

    //Let's measure the time something takes: 


    //std::cout << "Hello World!\n";

    //demoIsDigit();

    //auto something = 3.14; 

    //dfghjkjhfd
}