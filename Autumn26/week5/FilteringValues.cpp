#include <iostream>
#include <vector>

int main(){
    std::vector<int> v;
    int n, tmp, t;

    std::cout << "Enter n: " << std::endl;
    std::cin >> n;

    for(int i=0; i<n; i++){
        std::cin >> tmp;
        v.push_back(tmp);
    }

    std::cout << "Enter t: " << std::endl;
    std::cin >> t;

    for(int i=0; i<n; i++){
        if(v[i] < t){
            std::cout << v[i] << std::endl;
        }
    }
}