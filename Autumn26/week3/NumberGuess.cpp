#include <iostream>

int main(){

    int lb, ub, guess;
    std::string isDone = "", gorl;

    std::cout << "Enter a lower bound " << std::endl;
    std::cin >> lb;
    
    std::cout << "Enter an upper bound " << std::endl;
    std::cin >> ub;

    while((isDone != "Yes") && (isDone != "yes")){

        guess = (lb+ub)/2;
        std::cout << "Is " << guess << " your number? " << std::endl;
        std::cin >> isDone;

        if((isDone != "Yes") && (isDone != "yes")){

            std::cout << "Was your number greater or lesser? " << std::endl;
            std::cin >> gorl;
            
            if((gorl == "Greater") || (gorl == "greater")){
                lb = guess;
            }

            else{
                ub = guess;
            }

        }
        
    }

    std::cout << "Complete" << std::endl;

}