#include <iostream>
#include <vector>

int main(){
    std::vector<int> v;
    int n, tmp, s, occ = 0;

    std::cout << "Enter n: " << std::endl;
    std::cin >> n;

    for(int i=0; i<n; i++){
        std::cout << "Please enter a number: " << std::endl;
        std::cin >> tmp;
        v.push_back(tmp);
    }

    std::cout << "Enter s: " << std::endl;
    std::cin >> s;

    for(int i=0; i<n; i++){
        if(v[i] == s){
            occ += 1;
        }
    }

    std::cout << "There are " << occ << " occurences of " << s << std::endl;
}