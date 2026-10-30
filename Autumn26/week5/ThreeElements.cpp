#include <iostream>
#include <vector>

int main(){
    std::vector<int> v;
    
    v.push_back(10);
    v.push_back(23);
    v.push_back(2);

    std::cout << v[0] * (v[1]+v[2]) << std::endl;
}