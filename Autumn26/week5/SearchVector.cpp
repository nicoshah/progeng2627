#include <iostream>
#include <vector>

int search_vector(int n, const std::vector<int>& vin){

    for(int i=0; i<vin.size(); i++){
        if(vin[i]==n){
            return i;
        }
    }

    return -1;
}

int main(){
    std::vector<int> v1{4, 73, 29, 157, 85, -203, -853, 1729, 26, 1}, v2{42, 43, 269, 757, 85, -253, -833, 19, 16, 0};

    std::cout << search_vector(4, v1) << std::endl;
    std::cout << search_vector(-853, v1) << std::endl;
    std::cout << search_vector(666, v1) << std::endl;

    std::cout << search_vector(42, v2) << std::endl;
    std::cout << search_vector(-253, v2) << std::endl;
    std::cout << search_vector(1111, v2) << std::endl;

}