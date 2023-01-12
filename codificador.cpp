#include<iostream>
#include<stdio.h>//para o gets.
#include<stdlib.h>//para malloc.
#include<vector>
#include<string>

using namespace std;
string cifra_de_cesar(string s, int deslocamento){
	
	for(int i{0}; i < s.size(); i++){
		if(s.at(i) !=  ' '){
			s.at(i) = s.at(i) + deslocamento;
		}
		if(s.at(i) >= 'z'){
			s.at(i) = s.at(i) - 'z' + 'a' - 1;
		}
	}
	return s;
	
}

string inverte(string s){
	string aux = s;
	
	for(int i{0}; i < s.size(); i++){
		aux.at(i) = s.at(s.size() - 1 - i);
	}
	
	return aux;
}

int main(){
	
	string s;
	int deslocamento;
	
	cout << "Digite a frase\n";
	getline(cin, s);
	cout << "Digite o deslocamento\n";
	cin >> deslocamento;
	
	cout << "Frase normal\n";
	cout << s << "\n";
	
	cout << "Cifra de cesar\n";
	cout << cifra_de_cesar(s, deslocamento) << "\n";	
	
	cout << "Invertido\n";
	cout << inverte(cifra_de_cesar(s, deslocamento)) << "\n";
	
	return 0;
}
