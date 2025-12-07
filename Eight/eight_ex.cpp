#include <iostream>
#include <string>

int main(){
	std::string s; 
	std::cout<<"Enter your string"<<std::endl;
	std::cin>> s;
	
	int n = s.length();

		if(n < 3){
			std::cout<<"This is not a sandwich :("<<std::endl;
			return 0;
		}

	int left = 0;
	int right = n-1;
	char edge = s[0];

	while(left <  n && s[left] == edge){
	left++;
	}
	while(right >= 0 && s[right] == edge){
	right--;
	}

	if(left == 0 || right < left){
		std::cout<<"This is not sandwich :("<<std::endl;
		return 0;

	}

	char mid = s[left];

		for (int i = left; i < right; i++){
			if(s[i] != mid || mid == edge){
			std::cout<<"This is not a sandwich :("<<std::endl;
			}
			return 0;
		}

	std::cout<<"This is a sandwich :)"<<std::endl;
	return 0;

}
