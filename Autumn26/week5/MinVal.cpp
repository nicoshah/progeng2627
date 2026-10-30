#include <iostream>
#include <vector>

int min_vector_element(const std::vector<double>& vin){
    int min=0, minN;
    
    if(vin.size()==0){
        min = -1;
    }
    else{
        minN = vin[0];
        for(int i=1; i<vin.size(); i++){
            if(vin[i] < minN){
                minN = vin[i];
                min = i;
            }
        }
    }
    return min;
}

int main(){
    std::vector<double> v1{3, -12, 22}, v2{0, 2, 100, -2}, v3;
    std::cout << min_vector_element(v1) << std::endl;
    std::cout << min_vector_element(v2) << std::endl;
    std::cout << min_vector_element(v3) << std::endl;
}