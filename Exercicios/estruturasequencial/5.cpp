// Faça um programa em C++ que leia três números reais e calcule a média aritmética

#include <iostream>

int main(){

int n1, n2, n3, media;


std::cout << "Digite o primeiro numero: ";
std::cin >> n1;

std::cout << "Digite o segundo numero: ";
std::cin >> n2;

std::cout << "Digite o terceiro numero: ";
std::cin >> n3;

media = (n1+n2+n3)/3;
std::cout << "a media dos tres numeros é: " << media << "\n";
return 0 ;

}