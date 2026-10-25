#include <iostream>

double mypow(double base, int exp){
    double result=1;

    for(int i=0; i<abs(exp); i++){

        if(exp>=0){
            result *= base;
        }

        else{
            result /= base;
        }
        
    }

    return result;
}

double sop(double x,double n){
    double sum = 0;

    for(int i = 1; i < (n+1); i++){
        sum += mypow(x,i);
    }

    return sum;
}

int main(){

    std::cout << "x=2, n=3: " << sop(2, 3) << std::endl;
    std::cout << "x=0.5 n=22: " << sop(0.5, 22) << std::endl;
    std::cout << "x=1 n=12: " << sop(1, 12) << std::endl;
    std::cout << "x=2 n=4: " << sop(2, 4) << std::endl;

}