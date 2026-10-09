#include <iostream>

int main(){
    double n1, n2, product;
    // Declares the three variables
    // double - the type, which represents general decimal numbers

    std::cout << "Please enter the first number: " << std::endl;
    std::cin >> n1;

    std::cout << "Please enter the second number: " << std::endl;
    std::cin >> n2;

    product = n1 * n2;
    // assigns the result of n1+n2 to product

    std::cout << n1 << " * " << n2 << " = " << product << std::endl;
    
}