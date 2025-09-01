// Faça um programa em C++ que leia um número inteiro e informe se ele é par ou ímpar.
#include <iostream>
int main(){

int numero ;

std::cout << "Digite um número: " << "\n" ;
std::cin >> numero;

if (numero%2==0)
{
std::cout << "o numero é par" << "\n" ;
} else{
    std::cout << "o numero é impar" << "\n" ;
}
return 0;
}