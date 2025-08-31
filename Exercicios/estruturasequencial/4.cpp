// Faça um programa em C++ que leia dois números reais e exiba o resultado da divisão (primeiro dividido  pelo segundo).

#include <iostream>

int main(){

int n1, n2, div;

std::cout << "Digite o primeiro numero: ";
std::cin >> n1;

std::cout << "Digite o segundo numero: ";
std::cin >> n2;

div = n1/n2 ;
std::cout << "A divisão dos numeros é: " << div << "\n";
return 0; 


}