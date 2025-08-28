#include <iostream>


int main() {

    int a;         // inicialização padrão (sem valor definido, lixo de memória)

    // Formas tradicionais de inicialização:
    int b = 5;     // inicialização por cópia (valor após o sinal de =)
    int c ( 6 );   // inicialização direta (valor entre parênteses)

    // Formas modernas de inicialização (recomendadas):
    int d { 7 };   // inicialização direta por lista (valor entre chaves)
    int e {};      // inicialização por valor (chaves vazias → inicia com zero)
}
