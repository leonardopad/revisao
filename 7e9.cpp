#include <iostream>
int main (){
	int num = 0;
	for (int i = 1; i <= 101; i++){
		if( num % 2 == 0 && num % 5 == 0 ){
			std:: cout << num << " e divisivel por 2 e por 5\n";
		}else if (num % 2 != 0 || num % 5 != 0){
			std:: cout << num << " nao sao divisiveis por 2 ou por 5 ao mesmo tempo!\n";
		}
		num++;
	}	
}
