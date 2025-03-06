#include <iostream>
#include <iomanip>
#include <limits>
#include <cmath>

using namespace std;

int main() {

    double N{};
    double FactorialResult = 1;

    cout << "Please enter a non-negative integer:\n";
    cin >> N;


    if (N < 0 || N != floor(N)) { // Check if it's negative or not an integer
        cout << "You shall not pass! Just kidding, but please enter a non-negative integer next time.\n";
        return 1;
    }

    else if (N > 20) {
        cout << "Factorial of numbers greater than 20 may overflow. You have now been warned.\n";
    }


    for (int i = 1; i <= N; i++) {
        FactorialResult = FactorialResult * i;
    }

    cout.imbue(std::locale("")); //what in the world is this doing? 

    cout << N << "'s factorial result is " << FactorialResult << "\n";

}