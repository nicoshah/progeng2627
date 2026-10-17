#include <iostream>

int main(){
    int x,n,acc = 1;

    std::cin >> x;
    std::cin >> n;

    for(int i = 0; i < n ; i++){
        acc = acc*x;
    }

    std::cout << acc << std::endl;
}