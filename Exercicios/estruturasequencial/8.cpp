// Faça um programa em C++ que leia o comprimento e a largura de um retângulo e calcule seu perímetro e área.
// pedir dados -- somar perimetro -- calcular area

#include <iostream> 

int main(){

    double comprimento, largura, perimetro, area;

    std::cout << "Digite o comprimento: " ;
    std::cin >> comprimento;

    std::cout << "Digite o largura: " ;
    std::cin >> largura;

    perimetro = comprimento + largura ;
    area = comprimento * largura;

    std::cout << "O perimetro é de " << perimetro << "\n";
    std::cout << "O area é de " << area << "\n";
    return 0;




}