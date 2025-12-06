#include <iostream>
#include <cmath>

int main (){
double a, b, c;
std::cin >> a >> b >> c;

double D = (b*b)-(4*a*c);
double rt = std::sqrt(D);

 
if (D > 0) {

	double x1 = (-b + rt)/(2*a);
	double x2 = (-b - rt)/(2*a);
	std::cout << "Roots: " << x1 << " and "<< x2 << std::endl;

}else if (D == 0){
	
	double x = (-b)/(2*a);
	std::cout << "Root: " << x <<std::endl;

}else  {
	std::cout<<"The equation has no roots."<<std::endl;
}

return 0;
}
