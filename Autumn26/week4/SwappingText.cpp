#include <iostream>
#include <string>

void myswap(std::string& word1, std::string& word2){
    std::string temp;
    temp = word1;
    word1 = word2;
    word2 = temp;

}

int main(){

    std::string word1, word2;

    std::cout << "Enter word 1: " << std::endl;
    std::cin >> word1;

    std::cout << "Enter word 2: " << std::endl;
    std::cin >> word2;    

    std::cout << "You entered: " << std::endl;
    std::cout << "Word 1: " << word1 << std::endl;
    std::cout << "Word 2: " << word2 << std::endl;

    myswap(word1, word2);

    std::cout << "After swap: " << std::endl;
    std::cout << "Word 1: " << word1 << std::endl;
    std::cout << "Word 2: " << word2 << std::endl;
}