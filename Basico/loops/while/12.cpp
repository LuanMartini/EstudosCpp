// 12. **Somar até número negativo**  
//     Leia números do usuário e vá somando até que ele digite um número negativo.  

#include <iostream> 

int main(){

    int n;
    std::cout << "Digite um número: ";
    std::cin >> n;
    while (n > 0)
    {
        int soman = n + soman;
        std::cout << "Digite novamente(sair=n negativo)";
        std::cin >> n;
        std::cout << "soma dos numeros é igual: " << soman;
    }
    
    return 0;
    
}