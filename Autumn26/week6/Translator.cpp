#include <iostream>
#include <vector>
#include <fstream>
#include <cstdlib>
#include <string>


int read_txt(std::ifstream& file, const std::string& filename, std::vector<std::string>& vout){
    std::string tmp;
    file.open(filename);
    if(!file.is_open()){
        std::cout << "Error opening " << filename << std::endl;
        return EXIT_FAILURE;
    }
    while(file >> tmp){
        vout.push_back(tmp);
    }
    file.close();
    return 0;
}

void translate(std::vector<std::string>& vin, const std::vector<std::string>& defin){
    for(int i=0; i<defin.size()-1; i+=2){
        for(int j=0; j<vin.size()-1; j++){
            if(vin[j] == defin[i]){
                vin[j] = defin[i+1];
            }
        }
    }
}

void write_txt(const std::vector<std::string>& v_text, const std::string& fname, std::ofstream& outfile){
    outfile.open(fname);
    for(int i=0; i<v_text.size(); i++){
        outfile << v_text[i] << " ";
    }
    outfile.close();
}

int main(){
    std::ifstream text, definitions;
    std::ofstream translated;
    std::vector<std::string> v_text, v_definitions;

    read_txt(text, "Advertisement.txt", v_text);
    read_txt(definitions, "Definitions.txt", v_definitions);

    translate(v_text, v_definitions);

    write_txt(v_text, "Translated.txt", translated);
}