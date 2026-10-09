#include <iostream>

int main(){

    //double n, rem;
    // This would not work for the % operation

    int n, rem;
    // type is integer now not general integer

    std::cout <<"Please enter a number: " << std::endl;
    std::cin >> n;

    rem = n % 2;
    // % checks the remainder when dividing by 2
    // if rem = 0, even
    // if rem = 1, odd

    std::cout << "In the following line, 0 means even and 1 means odd" << std::endl;
    std::cout << rem << std::endl;

}