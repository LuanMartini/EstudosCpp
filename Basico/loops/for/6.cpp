// 6.  **Tabuada personalizada**
//     Leia um número n e até onde quer multiplicar (por exemplo, até 15) e
//     imprima a tabuada.

#include <iostream> 


int main(){
    int multiplicador;
    int tabuada;
    std::cout << "Até quanto você quer multiplicar: ";
    std::cin >> multiplicador;
    std::cout << "Qual número voce quer a tabuada: ";
    std::cin >> tabuada;

    for (int index = 1; index <= multiplicador; index++)
    {
        std::cout <<  tabuada << " X " << multiplicador << " = " << tabuada*index << '\n';
    }
    return 0;


    



}