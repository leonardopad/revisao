#include <iostream>
int main (){
	for (int num = 0; num <= 100; num++){
		if (num % 5 == 0){
			std:: cout << num << "\n";
			
		}else if(num % 5 != 0){
			std:: cout << "Nao divisivel por 5: " << num << "\n";
		}
	}
	
}
