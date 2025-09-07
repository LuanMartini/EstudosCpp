// 7.  **Soma de pares até N**
//     Leia um número n e some apenas os números pares até ele.

#include <iostream> 

int main(){
    int n;
    std::cout << "Digite um numero: ";
    std::cin >> n ;
    int index = 1;
    int somanumero = 0;
    while (index<= n)
    {
        if (index % 2 == 0)
        {
            somanumero = somanumero + index;
        }
        
        index = index +1; 
    }
    std::cout << somanumero;
    return 0;
    
}