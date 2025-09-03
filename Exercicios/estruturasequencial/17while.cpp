#include <iostream> 

void somaUMpraN(int n) {
    int soma = 0;        // Acumulador para guardar a soma dos números
    int contador = 1;    // Começa no 1

    // Enquanto o contador for menor ou igual a n, repete
    while (contador <= n) {
        soma = soma + contador;  // Soma o valor atual do contador
        contador++;              // Incrementa o contador (+1)
    }

    std::cout << "A soma dos numeros de 1 ate " << n << " = " << soma << "\n";
}

int main() {
    int n;
    std::cout << "Diga um numero inteiro maior que 0: \n";
    std::cin >> n;

    if (n > 0) {
        somaUMpraN(n);  // Chama a função
    } else {
        std::cout << "Numero invalido! Digite maior que 0.\n";
    }

    return 0;
}
