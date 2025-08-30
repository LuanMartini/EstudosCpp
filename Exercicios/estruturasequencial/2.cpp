// Faça um programa em C++ que leia dois números inteiros e exiba a diferença (primeiro menos segundo).

#include <iostream>

int main(){

    int n1, n2, sub;

    std::cout << "Digite o primeiro numero: ";
    std::cin >> n1;

    std::cout << "Digite o segundo numero: ";
    std::cin >> n2;

    sub = n1 - n2;
    std::cout << "A subtração dos numeros é: " << sub << "\n";

    return 0; 
}

