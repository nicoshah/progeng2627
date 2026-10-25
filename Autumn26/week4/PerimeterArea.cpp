#include <iostream>

void Calc(double l, double w, double& area, double& perimeter){
    area = l*w;
    perimeter = 2*l + 2*w;
}


int main(){
    double length_in, width_in, area, perimeter;
    
    std::cout << "Enter length: " << std::endl;
    std::cin >> length_in;
    std::cout << "Enter width: " << std::endl;
    std::cin >> width_in;

    Calc(length_in, width_in, area, perimeter);

    std::cout << "Area: " << area << std::endl;
    std::cout << "Perimeter: " << perimeter << std::endl;
}