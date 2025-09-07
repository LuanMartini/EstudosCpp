// 6.  **Contagem crescente**\
//     Imprima os números de 1 até n usando while.

#include <iostream>


int main(){
    int index = 1;
    int n;
    std::cout << "Digite um número: ";
    std::cin >> n;
    while (index <= n)
    {
        std::cout << index <<'\n';
        index = index +1;
    }
    return 0;


}