// Faça um programa em C++ que converta uma temperatura em Celsius para Fahrenheit.

#include <iostream> 

int main(){

    double celsius, farenheit;

    std::cout << "Digite o numero em Celsius: ";
    std::cin >> celsius ;

    farenheit =(celsius*1.8)+32;

    std::cout  << "A temperatura em farenheit é: " << farenheit << "\n";
    return 0;



}