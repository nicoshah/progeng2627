#include <iostream>
#include <fstream>

int main(){
    std::ifstream infile;
    infile.open("input.txt");

    if(infile.is_open()){
        int tmp, sum = 0;
        while(infile >> tmp){
            std::cout << tmp << std::endl;
            sum += tmp;
        }

        std::cout << sum << std::endl;
        infile.close();
    }

    else{
        std::cout << "Error opening file" << std::endl;
    }
}