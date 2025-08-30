// Faça um programa em C++ que leia dois números inteiros e exiba a soma deles.
// pedir numero -- somar numero -- imprimir numero
#include <iostream>

int main(){

int n1, n2, soma ;

std::cout << "Digite o primeiro numero: ";
std::cin >> n1;

std::cout << "Digite o segundo numero: ";
std::cin >> n2;

soma = n1 + n2 ;
std::cout << "A soma dos dois numeros é: " << soma << "\n" ; 

return 0;



}