#include <iostream>
#include <vector>

void filter_v(const std::vector<double>& vin, double t, std::vector<double>& vout){
    for(int i=0; i<vin.size(); i++){
        if(vin[i]<t){
            vout.push_back(vin[i]);
        }
    }
}

int main(){
    std::vector<double> v;
   
    filter_v({1, 2, 3, 4, 5, 6, 7, 8, 9, 10}, 5, v);
    for(int i=0; i<v.size(); i++){
        std::cout << v[i] << std::endl;
    }    
    
    v.clear();
    filter_v({1, 2, 3, 4, 5, 6, 7, 8, 9, 10}, 0, v);
    for(int i=0; i<v.size(); i++){
        std::cout << v[i] << std::endl;
    }
    
    v.clear();
    filter_v({1, 2, 3, 4, 5, 6, 7, 8, 9, 10}, 10, v);    
    for(int i=0; i<v.size(); i++){
        std::cout << v[i] << std::endl;
    }
}