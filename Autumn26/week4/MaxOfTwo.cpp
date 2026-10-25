#include <iostream>

int bigger(int x, int y){
    int biggest;
    
    if(x>y){
        biggest = x;
    }

    else{
        biggest = y;
    }

    return biggest;
}


int main(){
    int x=0,y=0;

    std::cout << "Enter x and y: " << std::endl;
    std::cin >> x >> y;

    std::cout << bigger(x,y) << " is bigger";
}