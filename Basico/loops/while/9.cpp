//  **Maior número digitado**\
//     O usuário digita vários números. O programa para quando ele digitar
//     0 e mostra qual foi o maior número digitado.


#include <iostream>

int main() {
    int numero;
    int maiornumero = 0; // guarda o maior número

    std::cout << "Digite um numero (0 para sair): ";
    std::cin >> numero;

    while (numero != 0) {
        if (numero > maiornumero) {
            maiornumero = numero;
        }
        std::cout << "Digite um numero (0 para sair): ";
        std::cin >> numero;
    }

    std::cout << "O maior numero digitado foi: " << maiornumero << '\n';

    return 0;
}