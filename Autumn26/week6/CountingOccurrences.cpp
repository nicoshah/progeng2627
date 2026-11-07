#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <cstdlib>

void read_file(std::ifstream& infile, std::vector<std::string>& vout){
    std::string tmp;
    while(infile >> tmp){
        vout.push_back(tmp);
    }
}

void countwords(const std::vector<std::string>& words_v, const std::vector<std::string>& text_v, std::vector<int>& count_v){
    for(int i=0; i<words_v.size(); i++){
        int count = 0;
        for(int j=0; j<text_v.size(); j++){
            if(words_v[i] == text_v[j]){
                count++;
            }
        }
        count_v.push_back(count);
    }
}

int main(){
    std::ifstream textfile, wordstofind;
    std::ofstream outfile;
    std::vector<std::string> text_v, words_v;
    std::vector<int> count_v;

    textfile.open("text.txt");
    if(!textfile.is_open()){
    std::cout << "Error opening text.txt" << std::endl;
    return EXIT_FAILURE;
   }
    read_file(textfile, text_v);
    textfile.close();

    wordstofind.open("words.txt");
    if(!wordstofind.is_open()){
    std::cout << "Error opening words.txt" << std::endl;
    return EXIT_FAILURE;
   }
   
    read_file(wordstofind, words_v);
    wordstofind.close();

    countwords(words_v, text_v, count_v);

    outfile.open("output.txt");
    for(int i=0; i<count_v.size(); i++){
        outfile << words_v[i] << ": " << count_v[i] << std::endl;
    }
    outfile.close();
}