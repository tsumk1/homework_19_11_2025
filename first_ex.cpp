#include <iostream>
#include <fstream>
#include <string>

int main() {
    std::ifstream file("/home/anastasia/Downloads/ascii-art.txt");
    std::string line;

    while (std::getline(file, line)) {
        std::cout << line <<std::endl;
    }

    std::cout << "The Neighbourhood logo"<<std::endl;
    std::cout << ":)" <<std::endl;

    return 0;
}
