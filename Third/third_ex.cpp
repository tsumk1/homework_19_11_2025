#include <iostream> 
int main () {
	int length, width;

	std::cout<< "Введіть бажану довжину: " <<std::endl;
	std::cin>> length ;
        std::cout<< "Введіть бажану ширину: " <<std::endl;
        std::cin>> width  ;
	std::cout << "Ось ваша фігура:\n"<< std::endl;
	
	for (int i = 0; i < length; i++) {
    
             for (int k = 0; k < width; k++) {
                  std::cout << "*";
        }
        std::cout << std::endl; 
    }

    return 0;


}


