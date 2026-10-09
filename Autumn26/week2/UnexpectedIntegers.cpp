#include <iostream>

int main(){
    std::cout << 5 / 2 <<std::endl;
    // This does not print out 2.5 as expected
    // Because 5 and 2 are interpreted as integers
    // So the output will also be an integer
    std::cout << 5 / 2.0 << std::endl;
    // Add a decimal point to interpret at least
    // one of the variables as a non-integer
    
}