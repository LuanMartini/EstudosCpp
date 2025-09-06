// Fatorial:
// Leia um número n e calcule o fatorial usando for.

// ler numero 
// calular fatorial


#include <iostream>

int main(){
    int numero;
    int fat = 1;


    std::cout << "Digite o numero para descobrir o fatorial: ";
    std::cin >> numero ;
    for (int i = numero ; i > 1 ; i = i-1)
    {
        fat = fat* i;
      
    }
    

    std::cout << "O fatorial de " << numero << " é: " << fat << "\n";
    return 0;



}

