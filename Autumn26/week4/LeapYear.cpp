#include <iostream>

bool leap_year(int year){
    bool ly;

    if((year % 400 == 0) || (year % 4 == 0) && (year % 100 != 0)){
        ly=true;
    } 

    else{
        ly=false;
    }

    return ly;
}

int main(){
    int input_year;

    std::cout << "Enter a year: " << std::endl;
    std::cin >> input_year;

    if(leap_year(input_year)){
        std::cout << "It is a leap year" << std::endl;
    }

    else{
        std::cout << "It is not a leap year" << std::endl;
    }
}