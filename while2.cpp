#include <iostream>
int main (){
	int num = 0;
	while (num <= 100){
		if (num % 5 == 0){
			std:: cout << num << "\n";
			
		}else if(num % 5 != 0){
			std:: cout << "Nao divisivel por 5: " << num << "\n";
		}
		num++;
	}
	
}
