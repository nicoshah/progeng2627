#include <iostream>
#include <fstream>
#include <vector>
#include <cstdlib>
#include <string>

int main(){
    std::ifstream infile;
    std::ofstream outfile;
    std::string fname1, fname2;

    std::cout << "Enter input file name:" << std::endl;
    std::cin >> fname1;
    infile.open(fname1);

    std::vector<int> v;

    if(!infile.is_open()){
        std::cout << "Error opening file" << std::endl;
        return EXIT_FAILURE;
    }

    int tmp;

    while(infile >> tmp){
        v.push_back(tmp);
    }

    infile.close();

    std::cout << "Enter output file name:" << std::endl;
    std::cin >> fname2;
    outfile.open(fname2);

    for(int i=v.size()-1; i >= 0; i--){
        outfile << v[i] << std::endl;
    }

    outfile.close();
}