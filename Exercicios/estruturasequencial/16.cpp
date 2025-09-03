// Faça um programa em C++ que leia o preço de um produto e aplique um desconto percentual informado pelo usuário; exiba o preço final

#include <iostream>

float aplicaDesconto(float preco, float desconto){

float diminuir;
diminuir= preco -(preco*desconto/100);
return diminuir;

}


int main(){

float preco;
float desconto;
std::cout << "Digite o preço do produto: ";
std::cin >> preco;
std::cout << "Digite o desconto do produto: ";
std::cin >> desconto;

float conta;
conta = aplicaDesconto(preco,desconto);
std::cout << "O preço reajustado é: " << conta << "\n";
return 0;
}
