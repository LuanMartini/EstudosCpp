// Faça um programa em C++ que converta uma temperatura em Fahrenheit para Celsius.
#include <iostream> 

int main(){

    double celsius, farenheit;

    std::cout << "Digite o numero em farenheit: ";
    std::cin >> farenheit ;

    celsius = (farenheit-32)*(5.0/9.0);

    std::cout  << "A temperatura em celsius é: " << celsius << "\n";
    return 0;



}