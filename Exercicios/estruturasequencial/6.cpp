// Faça um programa em C++ que leia o raio de um círculo (real) e calcule sua área (use p = 3.14159).

#include <iostream>

int main(){

double area, raio, pi ;
std::cout << "Digite o raio do circulo: ";
std::cin >> raio ;

pi = 3.1416;
area = (raio * raio ) * pi ;

std::cout << "A area do circulo é: " << area << "\n";
return 0;


}