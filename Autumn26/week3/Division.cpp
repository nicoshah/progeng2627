#include <iostream>

int main(){
    int p,q, count = 0, remainder = 0;

    std::cin >> p;
    std::cin >> q;

    while((p > q) || (p == q)){
        p = p-q;
        count = count + 1;
    }
    remainder = p;
    
    std::cout << count << " remainder " << remainder << std::endl;

}