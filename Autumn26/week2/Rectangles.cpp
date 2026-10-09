#include <iostream>

int main(){
    double length,width,perimeter,area;

    std::cout << "Input the length of the rectangle: " << std::endl;
    std::cin >> length;

    std::cout << "Input the width of the rectangle: " << std::endl;
    std::cin >> width;

    perimeter = 2 * length + 2 * width;
    area = length * width;

    std::cout << "The perimeter is: " << perimeter << std::endl;
    std::cout << "The area is: " << area << std::endl;

}