#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>

int main(){
    std::ifstream infile;
    std::string file;
   
    std::cout << "Enter file name:" << std::endl;
    std::cin >> file;
    infile.open(file);
    
    if(!infile.is_open()){
        std::cout << "Error opening file" << std::endl;
        return EXIT_FAILURE;
    }

    int tmp;
    while(infile >> tmp){
        std::cout << tmp << std::endl;
    }

    infile.close();
}