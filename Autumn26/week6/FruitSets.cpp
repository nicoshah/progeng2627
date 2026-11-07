#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
#include <fstream>

int search_vector(std::string n, const std::vector<std::string>& vin){

    for(int i=0; i<vin.size(); i++){
        if(vin[i]==n){
            return i;
        }
    }

    return -1;
}

void union_vector(const std::vector<std::string>& vin1, const std::vector<std::string>& vin2, std::vector<std::string>& vout) {
    for(int i=0; i<vin1.size(); i++){
        if(search_vector(vin1[i], vout) == -1){
            vout.push_back(vin1[i]);
        }
    }

    for(int i=0; i<vin2.size(); i++){
        if(search_vector(vin2[i], vout) == -1){
            vout.push_back(vin2[i]);
        }
    }
}

void intersection_vector(const std::vector<std::string>& vin1, const std::vector<std::string>& vin2, std::vector<std::string>& vout) {
    for(int i=0; i<vin1.size(); i++){
        if(search_vector(vin1[i], vin2) != -1 && search_vector(vin1[i], vout) == -1){
            vout.push_back(vin1[i]);
        }
    }
}

int main() {
    std::string input1, input2, tmp;
    std::ifstream infile1, infile2;
    std::ofstream unionfile, intersectionfile;
    std::vector<std::string> v1, v2, v_union, v_intersection;

    std::cout << "Enter name of first file:" << std::endl;
    std::cin >> input1;
    infile1.open(input1);
    if(!infile1.is_open()){
        std::cout << "Error opening file" << std::endl;
        return EXIT_FAILURE;
    }
    while(infile1 >> tmp){
        v1.push_back(tmp);
    }
    infile1.close();

    std::cout << "Enter name of second file: " << std::endl;
    std::cin >> input2;
    infile2.open(input2);
    if(!infile2.is_open()){
        std::cout << "Error opening file" << std::endl;
        return EXIT_FAILURE;
    }
    while(infile2 >> tmp){
        v2.push_back(tmp);
    }
    infile2.close();
    


    union_vector(v1, v2, v_union);
    unionfile.open("union.txt");
    for(int i=0; i<v_union.size(); i++){
        unionfile << v_union[i] << std::endl;
    }
    unionfile.close();

    intersection_vector(v1, v2, v_intersection);
    intersectionfile.open("intersection.txt");
    for(int i=0; i<v_intersection.size(); i++){
        intersectionfile << v_intersection[i] << std::endl;
    }
    intersectionfile.close();
}
