#include <iostream>

int main(){
    int total = 0, n;

    std::cout << "Enter a number:" << std::endl;
    std::cin >> n;

    while(n != 0){
        total = total + n;
        std::cout << "The sum so far is:" << std::endl << total << std::endl;
        std::cout << "Enter a number:" << std::endl;
        std::cin >> n;
    }
}