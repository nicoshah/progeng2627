#include <iostream>

int main(){
    int n,count = 0;

    std::cout << "Enter a natural number" << std::endl;
    std::cin >> n;

    int max = n;

    while(n != 1){

        if(n % 2 == 0){
            n /= 2;
        }
        else{
            n *= 3;
            n += 1;
        }

        if(n > max){
            max = n;
        }

        std::cout << n << std::endl;
        count += 1;

    }
    
    std::cout << "No. of steps: " << count << std::endl;
    std::cout << "Max no. : " << max << std::endl;

}