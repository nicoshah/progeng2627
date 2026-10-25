#include <iostream>

int bigger(int x, int y, int z){
    int biggest;
    
    if(x>y){
        biggest = x;
    }
    else{
        biggest = y;
    }

    if(z>biggest){
        biggest = z;
    }

    return biggest;
}


int main(){
    int x,y,z;

    std::cout << "Enter 3 numbers: " << std::endl;
    std::cin >> x >> y >> z;

    std::cout << bigger(x,y,z) << " is bigger";
}