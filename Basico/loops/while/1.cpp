// 🔹 Com while:

// Contagem regressiva:
// Imprima os números de 10 até 1.

// Repetir nome:
// Peça ao usuário um nome e um número n. Escreva o nome dele n vezes.

// Somar até 100:
// Leia números do usuário e vá somando até que a soma passe de 100.

// Adivinhação simples:
// O programa sorteia um número de 1 a 10 (ou você define fixo, tipo 7). O usuário deve tentar adivinhar até acertar.

// Imprimir ímpares:
// Use while para imprimir os números ímpares de 1 a 19.

#include <iostream> 


int main(){
    int index = 10;
    int n = 1 ;
    while (index >=n)
    {
        std::cout << index << "\n";
       index = index - 1;
      
       
    }
    
        return 0;
}