#include <iostream>

// New function called myabs
// Input parameter is type double (double in)
// Returns a value of type double (double myabs)

double myabs(double in){

    double abs;

    if(in<0){
        abs=-in;
    }

    else{
        abs=in;
    }

    return abs;

}

int main(){
    double n;
    std::cout << "Please enter a number: " << std::endl;
    std::cin >> n;
    std::cout << "|" << n << "| = " << myabs(n) << std::endl;
}