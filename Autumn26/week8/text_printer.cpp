#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>

int main(int argc, char* argv[]){

    std::ifstream infile;
    infile.open(argv[1]);

    if(!infile.is_open()){
        std::cout << "Error opening file" << std::endl;
        EXIT_FAILURE;
    }

    std::string tmp;
    while(infile >> tmp){
        std::cout << tmp << std::endl;
    }
    infile.close();
}