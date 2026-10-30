// The program will incorrectly print the vector 1, 2, 3, then 1, 2, 3, 1, 2, 3, 4, etc because
// The vector is not reset each time and instead the numbers are repeated each time

#include <iostream>
#include <vector>


void from_1_to_n(int n, std::vector<int>& vout){

    for(int i = 0; i < n; i++){
        vout.push_back(i+1);
    }

}

int main(){
    std::vector<int> v;

    for(int n = 3; n < 7; n++){
        from_1_to_n(n, v);

        std::cout << "printing vector:" << std::endl;
        for(int i = 0; i < v.size(); i++){
            std::cout << v[i] << std::endl;
        }
    }
}