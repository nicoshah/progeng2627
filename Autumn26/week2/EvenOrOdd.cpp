#include <iostream>

int main(){
    int n, rem;

    std::cout << "Please enter a number" << std::endl;
    std::cin >> n;

    rem = n % 3;

    if(rem == 0){
        std::cout << "The number is a multiple of 3" << std::endl;
    }

    else{
        std::cout << "The number is not a multiple of 3" << std::endl;
    }


    // Alternative no.1
    // bool is_even;
    // is_even = (rem == 0);
    // if (is_even{ ... etc

    // Alternative no.2
    // if ((n % 2) == 0){ ... etc
}