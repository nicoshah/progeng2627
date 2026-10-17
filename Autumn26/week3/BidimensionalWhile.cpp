#include <iostream>

int main(){
    int n, rows = 0, columns = 0;

    std::cin >> n;

    while(rows<n){

        while(columns<n){
            std::cout << "*";
            columns++;
        }
        columns = 0;
        rows++;
        std::cout << std::endl;

    }
}