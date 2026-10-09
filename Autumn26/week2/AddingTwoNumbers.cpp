#include <iostream>

int main(){
    double n1, n2, sum;
    // Declares the three variables
    // double - the type, which represents general decimal numbers

    std::cout << "Please enter the first number: " << std::endl;
    std::cin >> n1;

    std::cout << "Please enter the second number: " << std::endl;
    std::cin >> n2;

    sum = n1 + n2;
    // assigns the result of n1+n2 to sum

    std::cout << n1 << " + " << n2 << " = " << sum << std::endl;
    

}