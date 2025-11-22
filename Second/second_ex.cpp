#include <iostream>
#include <string>
int main () {

    std::cout<<"Введіть текст: "<<std::endl;
    std::string text;
    std::cin >>  text;

    int len = 0;

    for (int i = 0; text[i] != '\0'; i++) {
        len++;
    }
    std::cout<< "Довжина рядка:  " << len <<std::endl;
    return 0 ;

}

// Але ця програма читає лише букви 
