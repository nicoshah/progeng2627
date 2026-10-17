#include <iostream>

int main(){
    double x, n, result = 0;
    int counter = 0;

    std::cin >> x >> n;

    while(counter < n){
        result = result + x;
        counter = counter + 1;
    }

    std::cout << x << "*" << n << "=" << result <<std::endl;

}