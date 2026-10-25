#include <iostream>

int smallest_factor(int n){
    for(int cf = 2; cf < (n+1); cf++){
        if((n%cf) == 0){
            return cf;
        }
    }
}

int main(){
    int n;
    std::cin >> n;
    std::cout << smallest_factor(n) << std::endl;
}