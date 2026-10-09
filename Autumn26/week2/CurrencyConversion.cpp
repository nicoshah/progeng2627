#include <iostream>

int main (){
    double pounds, euros, exchrate;

    std::cout << "Input amount of money in GBP: " << std::endl;
    std::cin >> pounds;

    std::cout << "Input exchange rate from GBP to EUR: " << std::endl;
    std::cin >> exchrate;

    euros = pounds * exchrate;
    std::cout << pounds << " GBP is equal to " << euros << " EUR" << std::endl;

}