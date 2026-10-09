#include <iostream>

int main(){
    double celsius, fahrenheit;

    std::cout << "Enter temperature in degrees Celsius: " << std::endl;
    std::cin >> celsius;

    fahrenheit = (celsius * 9 / 5) + 32;

    std::cout << celsius << " degrees Celsius is equal to " << fahrenheit << " degrees Fahrenheit" << std::endl;

}