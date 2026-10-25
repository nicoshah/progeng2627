#include <iostream>

bool isPrime(int n){
    for(int cf = 2; cf < (n); cf++){
        if((n%cf) == 0){
            return false;
        }
    }
    return true;
}

int main(){
    int n1, n2;
    std::cout << "Input two integers: " << std::endl;
    std::cin >> n1 >> n2;
    for(int i=n1; i<n2+1; i++){
        if(isPrime(i)){
            std::cout << i << std::endl;
        }
    }
}