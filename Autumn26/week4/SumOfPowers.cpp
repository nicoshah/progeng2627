#include <iostream>
#include <cmath>

int main(){
    int x,n, sum=0;
    
    std::cout << "Enter x: " << std::endl;
    std::cin >> x;

    std::cout << "Enter n: " << std::endl;
    std::cin >> n;

    for(int i=1; i<n+1; i++){
        sum += std::pow(x,i);
    }

    std::cout << sum << std::endl;

}
