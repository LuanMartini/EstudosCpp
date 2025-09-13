// 11. **Contar dígitos**  
//     Leia um número e conte quantos dígitos ele tem (ex.: 12345 → 5 dígitos).  
#include <iostream>
#include <string>

int main() {
    int numero;
    std::cout << "Digite um numero: ";
    std::cin >> numero;

    std::string str = std::to_string(numero);
    int digitos;

    if (numero < 0) {
        digitos = str.size() - 1; 
    } else {
        digitos = str.size();
    }

    std::cout << "O numero tem " << digitos << " digitos." << std::endl;

    return 0;
}
