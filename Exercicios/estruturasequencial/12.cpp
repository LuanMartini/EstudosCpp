// Faça um programa em C++ que leia um número inteiro e informe se ele é positivo, negativo ou zero.
#include <iostream>
using namespace std;

// A função ehPositivo poderia ser void, já que só imprime e não retorna nada.
void ehPositivo(int numero) {
    if (numero > 0) {
        cout << "É positivo" << endl;
    } else if (numero < 0) {
        cout << "É negativo" << endl;
    } else {
        cout << "É zero" << endl;
    }
}
// Na função ehPositivo, você misturou entrada de dados (cin) dentro da função.
// → É melhor ler o número no main e só passar para a função.
int main() {
    int numero;

    cout << "Digite um numero inteiro: ";
    cin >> numero;

    ehPositivo(numero); // chama a função passando o número lido

    return 0;
}