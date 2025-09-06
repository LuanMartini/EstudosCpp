// 9.  **Produto de números**\
//     Leia um número n e calcule o produto de todos os números de 1 até n.

#include <iostream> 

int main(){
    int i = 1;
    int n;
    int produto = 1;
    std::cout << "Digite um número: ";
    std::cin >> n;

    for (i; i <= n; i++)
    {
        produto = i * produto;
        
    }
        std::cout << produto;
        return 0;


}