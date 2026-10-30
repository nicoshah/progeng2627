#include <iostream>
#include <vector>

double sum_vector(std::vector<double> vin){
    double sum = 0;

    for(int i=0; i<vin.size(); i++){
        sum += vin[i];
    }

    return sum;
}

int main(){
    std::vector<double> v;
    int n, tmp;

    std::cout << "How many elements: " << std::endl;
    std::cin >> n;

    for(int i=0; i<n; i++){
        std::cout << "Enter element: " << std::endl;
        std::cin >> tmp;
        v.push_back(tmp);
    }
    
    std::cout << "The sum is: " << sum_vector(v) << std::endl;
}