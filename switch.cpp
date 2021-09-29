#include <iostream>
int main (){
	float num1 = 0;
	float num2 = 0;
	char operacao = 0;
	std:: cin >> num1;
	std:: cin >> num2;
	std:: cin >> operacao;
	switch(operacao){
		case '+':
			std:: cout << num1 + num2;
			break;
		case '-':
			std:: cout << num1 - num2;
			break;
		case '*':
			std:: cout << num1 * num2;
			break;
		case '/':
			std:: cout << num1 / num2;
			break;
	}	

}
