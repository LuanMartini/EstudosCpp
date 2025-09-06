// Leia um número n e calcule a soma de todos os números de 1 até n
// pedir n 
// calcular numero de 1 a n
// somar os numeros


#include <iostream> 

int main() {
    int num;
    int soma = 0;

    std::cout << "Digite um numero: ";
    std::cin >> num;

    // loop de 1 até num
    for (int index = 1; index <= num; index = index + 1) {
        soma = soma + index;
    }

    std::cout << "A soma de 1 até " << num << " é: " << soma << '\n';

    return 0;
}
