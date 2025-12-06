#include <iostream>
#include <cmath>

int main() {

double V0;
double a;
double const g = 9.8;
std::cout<<"Enter the speed value:  "<<std::endl;
std::cin>> V0;

std::cout<<"Enter the angle value: "<<std::endl;
std::cin>> a;

double sn = sin(2*a*M_PI/180);
double L = ((V0*V0)*sn)/g;
std::cout<< "Result: "<< L <<" m." <<std::endl;
return 0;



}
