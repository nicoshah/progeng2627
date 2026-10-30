#include <iostream>
#include <vector>

void append_vectors(const std::vector<int>& vin1, const std::vector<int>& vin2, std::vector<int>& vout){
    
    for(int i=0; i<vin1.size(); i++){
        vout.push_back(vin1[i]);
    }

    for(int i=0; i<vin2.size(); i++){
        vout.push_back(vin2[i]);
    }

}

int main(){
    std::vector<int> v1{1, 2, 3, 4}, v2{5, 6, 7, 2}, v;

    append_vectors(v1, v2, v);
    for(int i=0; i<v.size(); i++){
        std::cout << v[i] << std::endl;
    }

    v.clear();
    append_vectors(v2, v1, v);
    for(int i=0; i<v.size(); i++){
        std::cout << v[i] << std::endl;
    }
        
}
