#include <iostream>
int main() {
 int len;
 std::cout<<"Щоб ромб був красивий, значення довжини повинно бути непарним\n"<<std::endl;
printf("Натисніть Enter щоб продовжити: \n");
while(getchar() != '\n');

 std::cout<< "Введіть бажану довжину: " << std::endl;
 std::cin>> len ; 
       

 if(len % 2 == 0){

 for(int i=2; i <= len; i+=2){
    int spaces = (len - i) / 2;

    for(int s =0; s < spaces; ++s)
          std::cout<<" ";

    for(int k=0; k < i; ++k)
          std::cout << "*";
          std::cout<< '\n';
 }

 for(int i = len-2; i >= 2   ; i-=2){
   int spaces = (len - i) / 2;
    for (int s = 0; s < spaces; ++s) std::cout << " ";
    for (int k = 0; k < i; ++k) std::cout << "*";
        std::cout << '\n';


 }
} else{
 
 for(int i=1; i <= len; i+=2){
    int spaces = (len - i) / 2;

    for(int s =0; s < spaces; ++s) 
	    std::cout<<"  ";
    for(int k=0; k < i; ++k)
	  std::cout << "* ";
    std::cout<< '\n';
 }
  
 for(int i = len-2; i >= 1   ; i-=2){
   int spaces = (len - i) / 2;
    for (int s = 0; s < spaces; ++s) std::cout << "  ";
    for (int k = 0; k < i; ++k) std::cout << "* ";
        std::cout << '\n';
 
 }

 }
std::cout<< "Ось ваш ромб ;)"<<std::endl;

return 0;

}

