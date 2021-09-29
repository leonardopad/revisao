#include <iostream>
#include <cmath>
int main (){
	int a = 3;
	int b = -2;
	int c = -8;
	float root1 = 0;
	float root2 = 0;
	float delta = 0;
	
	delta = (b*b) - (4*a*c);
	
	root1=(-b - sqrt(delta))/(2*a);
	root2=(-b + sqrt(delta))/(2*a);
	std:: cout << "Primeira raiz = " << root1 << "\n";
	std:: cout << "Segunda raiz = " << root2 << "\n";	
}
