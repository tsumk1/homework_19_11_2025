#include <iostream>
#include <string>
int main () {

    std::cout<<"Введіть текст: "<<std::endl;
    std::string text;
   // std::cin >> text;
    std::getline(std::cin, text); // getline це функція яка зчитує рядок повністю, включно з пробілами і тд.

    int len = 0;

    for (int i = 0; i < text.size(); i++) {
        len++;
    }
    std::cout<< "Довжина рядка:  " << len <<std::endl;
    return 0 ;

}


