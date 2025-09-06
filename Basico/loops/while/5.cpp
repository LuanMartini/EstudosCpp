// Imprimir ímpares:
// Use while para imprimir os números ímpares de 1 a 19.

#include <iostream>

int main(){
    int index = 1;
    int soma = 19;
    while (soma>=index)
    {
        if (index % 2 != 0)
        {
            std::cout << index << '\n' ;
        }
        index = index +1;
    }
    return 0;

}