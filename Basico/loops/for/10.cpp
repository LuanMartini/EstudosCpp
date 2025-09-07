// 10. **Série 1 + 2 + 4 + 8 + ...**\
//     Leia um número n e imprima os n primeiros termos da série de potências de 2.


#include <iostream>

int main() {
    int n;
    std::cout << "Digite um numero: ";
    std::cin >> n;

    int termo = 1;
    for (int i = 0; i < n; i++) {
        std::cout << termo << " ";
        termo *= 2;
    }

    std::cout << std::endl;
    return 0;
}
