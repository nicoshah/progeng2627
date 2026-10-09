#include <iostream>
#include <string>

int main(){
    double length_in, length_out;
    std::string unit_in, unit_out;
    // Declare variables as strings

    const double mile_to_km = 1.609;
    // Declare mile_to_km as a constant non-integer

    std::cin>> length_in >> unit_in;
    // No prompt

    bool valid_unit = true;

    if(unit_in == "km"){
        unit_out = "mile";
        length_out = length_in / mile_to_km;
    }
    else if((unit_in == "mile") || (unit_in == "miles")){
        unit_out = "km";
        length_out = length_in * mile_to_km;
    }
    else{
        valid_unit = false;
    }

    if(valid_unit){
        std::cout << length_out << " " << unit_out << std::endl;
    }

    else{
        std::cout << "Error, unit not recognised" << std::endl;
    }
}
