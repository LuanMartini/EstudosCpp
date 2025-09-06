// Números pares:
// Imprima todos os números pares de 1 até 20.

#include <iostream>


int main(){
    int num = 1;
    int ate = 20;
    for (num; num <= ate; num = num+1)
    {
       if (num%2 == 0)
       {
       std::cout << num  << "\n";
       }
    }

    return 0;
    



    
}