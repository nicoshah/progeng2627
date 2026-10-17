#include <iostream>

int main(){
    double n, average, count = 0, total = 0;

    std::cout << "Enter a number:" << std::endl;
    std::cin >> n;

    while(n != 0){
        total = total + n;
        count = count + 1;
        average = total/count;

        std::cout << "The average so far is" << std::endl << average << std::endl;
        
        std::cout << "Enter a number:" << std::endl;
        std::cin >> n;
    }
}

