#include <iostream>

int main(){
    int n, count = 2;
    bool found_factor = false;

    std::cout << "Please enter an integer greater than 1: " << std::endl;
    std::cin >> n;
    
    while((found_factor == false) && (count < (0.5*n))){
        if((n % count) == 0){
            found_factor = true;
        }
        count += 1;
        std::cout << count << std::endl;
    }

    if(found_factor){
        std::cout << "The number is not prime" << std::endl;
    }

    else{
        std::cout << "The number is prime" << std::endl;
    }
}