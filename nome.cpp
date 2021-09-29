#include <iostream>

int main (){
	std:: string nome;
	std:: cout << "Digite seu nome:";
	std:: cin >> nome;
//	char nomechar1 = nome[0];
//	char nomechar2 = nome[1];
//	char nomechar3 = nome[2];
//	char nomechar4 = nome[3];
//	std:: cout << nome.length() << "\n";
//	std:: cout << nomechar1 << nomechar2 << nomechar3 << nomechar4;

	char nomechar[nome.length()];
	for(int i = 0; i <= nome.length(); i++){
		nomechar[i] = nome[i];
	}
	std:: cout << nomechar[0] << nomechar[1] << nomechar[2] << nomechar[3];
	
}
