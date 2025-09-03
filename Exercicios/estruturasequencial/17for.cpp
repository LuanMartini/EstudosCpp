#include <iostream> 

void somaUMpraN_for(int n) {
    int soma = 0;

    // O for já faz: inicialização ; condição ; incremento
    for (int contador = 1; contador <= n; contador++) {
        soma = soma + contador;  // Soma cada valor de 1 até n
    }

    std::cout << "A soma dos numeros de 1 ate " << n << " = " << soma << "\n";
}

int main() {
    int n;
    std::cout << "Diga um numero inteiro maior que 0: \n";
    std::cin >> n;

    if (n > 0) {
        somaUMpraN_for(n);  // Chama a versão com for
    } else {
        std::cout << "Numero invalido! Digite maior que 0.\n";
    }

    return 0;
}
