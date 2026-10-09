#include <iostream>

int main(){
    double height, weight, bmi;

    std::cout << "Enter height in m: " << std::endl;
    std::cin >> height;

    std::cout << "Enter weight in kg: " << std::endl;
    std::cin >> weight;

    bmi = weight / (height*height) ;

    std::cout << "Your BMI is: " << bmi;

}