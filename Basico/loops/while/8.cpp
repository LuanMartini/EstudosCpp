// 8.  **Senha correta**\
//     Peça ao usuário uma senha (fixa, tipo 1234) e continue pedindo até
//     que ele acerte.


#include <iostream>

int main(){
    const int senha = 1337;
    int acertarsenha;
    std::cout <<  "Digite a senha: ";
    std::cin >> acertarsenha;

    while (senha!=acertarsenha)
    {
        std::cout << "Tente novamente: " << '\n';
        std::cin >> acertarsenha;
    }
        std::cout << "Acertou a senha" << '\n';
        return 0;

    
}