#include <iostream>
int main (){
	int num = 0;
	do {
		if (num % 2 == 0){
			std:: cout << num << " par\n";
		}else if (num %2 != 0){
			std:: cout << num << " Impar\n";
		}
		num++;
	}while (num <= 100);
}
