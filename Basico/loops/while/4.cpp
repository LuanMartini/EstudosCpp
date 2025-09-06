// Adivinhação simples:
// O programa sorteia um número de 1 a 10 (ou você define fixo, tipo 7). O usuário deve tentar adivinhar até acertar.

#include <iostream>

// logica bibiliotecas para sortear 
// srand(time(0));
// sorteia um número entre 1 e 10
// int sorteado = rand() % 10 + 1;
#include <cstdlib> 
#include <ctime>   

int main(){

    int numerosorteado;
    srand(time(0));
    numerosorteado = rand() % 10 + 1;
    int numerousario;
    while (numerosorteado != numerousario)
    {
        std::cout << "Adivinhe o numero: ";
        std::cin >> numerousario;
    }

    std::cout << "Parabéns, você acertou o número " << numerosorteado << '\n';
    return 0;
    



}