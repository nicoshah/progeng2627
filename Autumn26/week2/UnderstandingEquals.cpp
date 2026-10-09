#include <iostream>

int main(){
    double a, b, c;
    a = 1;
    b = 2;
    c = a + b;

    std::cout << c << std::endl;
    // prints c which is 1 + 2, so 3
    
    a = 2;
    std::cout << c << std::endl;
    // expecting still 3 to be printed

    c = a + b;
    std::cout << c << std::endl;
    // expecting 4 to be printed
}