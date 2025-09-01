// Faça um programa em C++ que leia a base e a altura de um triângulo e calcule sua área.
#include <iostream>
int main(){

    double base, altura, area;

    std::cout << "Digite a base do triangulo";
    std::cin >> base;

    std::cout << "Digite a altura do triangulo";
    std::cin >> altura;

    area = (base*altura)/2;

    std::cout << "A area do triangulo é " << area << "\n";
    return 0; 

    
}