#include <iostream>
#include <vector>

void merge_vectors_int(const std::vector<int>& v1, const std::vector<int>& v2, std::vector<int>& merged){
    int i1=0, i2=0;
    
    while(i1 < v1.size() && i2 < v2.size()){
        if(v1[i1] <= v2[i2]){
            merged.push_back(v1[i1]);
            i1++;
        }
        else{
            merged.push_back(v2[i2]);
            i2++;            
        }
    }

    while(i1 < v1.size()){
        merged.push_back(v1[i1]);
        i1++;
    }
    while(i2 < v2.size()){
        merged.push_back(v2[i2]);
        i2++;
    }
    
}

int main(){

    std::vector<int> v1;
    std::vector<int> v2;
    std::vector<int> out;

    std::vector<int> expected_output;

    v1 = {1, 3, 5, 6};
    v2 = {4, 6, 10};
    expected_output = {1, 3, 4, 5, 6, 6, 10};
    merge_vectors_int(v1, v2, out);
    if(out == expected_output){
        std::cout << "passed" << std::endl;
    }
    else{
        std::cout << "not passed" << std::endl;
    }

    v1 = {};
    v2 = {};
    expected_output = {};
    out.clear();
    merge_vectors_int(v1, v2, out);
    if(out == expected_output){
        std::cout << "test 2 passed" << std::endl;
    }
    else{
        std::cout << "test 2 not passed" << std::endl;
    }

    v1 = {};
    v2 = {2, 4, 6};
    expected_output = {2, 4, 6};
    out.clear();
    merge_vectors_int(v1, v2, out);
    if(out == expected_output){
        std::cout << "test 3 passed" << std::endl;
    }
    else{
        std::cout << "test 3 not passed" << std::endl;
    }

    v1 = {1, 3, 5};
    v2 = {};
    expected_output = {1, 3, 5};
    out.clear();
    merge_vectors_int(v1, v2, out);
    if(out == expected_output){
        std::cout << "test 4 passed" << std::endl;
    }
    else{
        std::cout << "test 4 not passed" << std::endl;
    }

    v1 = {1, 2, 3};
    v2 = {7, 8, 9};
    expected_output = {1, 2, 3, 7, 8, 9};
    out.clear();
    merge_vectors_int(v1, v2, out);
    if(out == expected_output){
        std::cout << "test 5 passed" << std::endl;
    }
    else{
        std::cout << "test 5 not passed" << std::endl;
    }

    v1 = {7, 8, 9};
    v2 = {1, 2, 3};
    expected_output = {1, 2, 3, 7, 8, 9};
    out.clear();
    merge_vectors_int(v1, v2, out);
    if(out == expected_output){
        std::cout << "test 6 passed" << std::endl;
    }
    else{
        std::cout << "test 6 not passed" << std::endl;
    }

    v1 = {1, 3, 5, 7};
    v2 = {2, 4, 6, 8};
    expected_output = {1, 2, 3, 4, 5, 6, 7, 8};
    out.clear();
    merge_vectors_int(v1, v2, out);
    if(out == expected_output){
        std::cout << "test 7 passed" << std::endl;
    }
    else{
        std::cout << "test 7 not passed" << std::endl;
    }

    v1 = {5};
    v2 = {1, 2, 3, 4, 6, 7};
    expected_output = {1, 2, 3, 4, 5, 6, 7};
    out.clear();
    merge_vectors_int(v1, v2, out);
    if(out == expected_output){
        std::cout << "test 8 passed" << std::endl;
    }
    else{
        std::cout << "test 8 not passed" << std::endl;
    }

    v1 = {4, 4, 4};
    v2 = {4, 4};
    expected_output = {4, 4, 4, 4, 4};
    out.clear();
    merge_vectors_int(v1, v2, out);
    if(out == expected_output){
        std::cout << "test 9 passed" << std::endl;
    }
    else{
        std::cout << "test 9 not passed" << std::endl;
    }

    v1 = {-5, -1, 3};
    v2 = {-3, 0, 2};
    expected_output = {-5, -3, -1, 0, 2, 3};
    out.clear();
    merge_vectors_int(v1, v2, out);
    if(out == expected_output){
        std::cout << "test 10 passed" << std::endl;
    }
    else{
        std::cout << "test 10 not passed" << std::endl;
    }
}