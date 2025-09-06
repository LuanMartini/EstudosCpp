// Peça ao usuário um nome e um número n. Escreva o nome dele n vezes.


#include <iostream>

int main(){
    std::string nome;
    int n;
    int index = 1 ;
    std::cout << "Digite um nome: ";
    std::cin >> nome;
    std::cout << "Digite um num: ";
    std::cin >> n;
    while (index <= n)
    {
        index = index+1;
        std::cout << nome << '\n';
    }
    return 0 ;




}