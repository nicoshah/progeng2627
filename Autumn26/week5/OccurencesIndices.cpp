#include <iostream>
#include <vector>

int main(){
    std::vector<int> occurences, indices;
    int n, tmp, s, occ = 0;

    std::cout << "Enter n: " << std::endl;
    std::cin >> n;

    for(int i=0; i<n; i++){
        std::cout << "Please enter a number: " << std::endl;
        std::cin >> tmp;
        occurences.push_back(tmp);
    }

    std::cout << "Enter s: " << std::endl;
    std::cin >> s;

    for(int i=0; i<n; i++){
        if(occurences[i] == s){
            occ += 1;
            indices.push_back(i);
        }
    }

    if(indices.size()>0){
        std::cout << "There are " << occ << " occurences of " << s << " at indices: " << std::endl;
        for(int i=0; i<indices.size(); i++){
            std::cout << indices[i] << std::endl;
        }
    }

    else{
        std::cout << "There are no occurrences of " << s << std::endl;
    }
}