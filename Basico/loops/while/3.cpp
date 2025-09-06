// Somar até 100:
// Leia números do usuário e vá somando até que a soma passe de 100.
#include <iostream>

int main(){
    int num;
    int soma = 0;
    
    while (soma<=100)
    {
        std::cout << "Digite um numero: ";
        std::cin >> num;
        
        soma = soma + num;
    }

    std::cout << "A soma dos numeros ultrapassou 100. Valor final: " << soma << '\n';
    
    return 0;
}