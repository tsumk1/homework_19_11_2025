#include <iostream>
#include <cmath>
int main () {
double a;
std::cin>> a;

//double const PI = 3.14 - нє 

double result = sin (a*M_PI/180); 
std::cout<< result <<std::endl;

return 0;
/* В бібліотеці cmath можна число Пі записати яу M_PI , і все буде працювать. Ніяких змінних не треба .
 M_PI це константа з найбільш точним значенням Пі*/
}
