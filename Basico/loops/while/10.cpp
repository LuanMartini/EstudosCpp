// 10. **Média de números**\
//     O usuário digita números até digitar -1. O programa calcula e mostra
//     a média dos valores digitados.

#include <iostream> 

int main(){
    int numero;
    int numerosdigitados= 0;
    int contavezes=0;

    std::cout << "Digite um numero (-1 para sair): ";
    std::cin >> numero;
    while (numero!=-1)
    {
        std::cout << "Digite um numero (-1 para sair): " << '\n';
        std::cin >> numero;

        contavezes = contavezes +1;
        numerosdigitados = numerosdigitados + numero;



    }
    int media = numerosdigitados/contavezes;
    std::cout << "a media dos numeros digitados foi de " << media;
    return 0;
}