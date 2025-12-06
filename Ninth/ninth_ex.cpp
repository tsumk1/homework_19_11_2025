#include <iostream>
int main () {

	double goods;
	
	std::cout<<"Вартість товару: "<<std::endl;
	std::cin>>  goods;
	

	if(goods >= 500 && goods<1000){

		double discount_3 = 3;
		double discounted_product = (goods*discount_3)/100;
		std::cout<< goods - discounted_product<<std::endl;

	}else if(goods >= 1000){
		double discount_5 = 5;
		double discounted_product_2 = (goods*discount_5)/100;
                std::cout<< goods - discounted_product_2<<std::endl;

	}else {
	
		std::cout<<"Знижки нема"<<std::endl;
	}
return 0;

}
