
// 11. **Soma dos ímpares até N**  
//     Leia um número n e calcule a soma de todos os números ímpares até ele.  


#include <iostream> 

int main(){
    int n;
    std::cout << "Digite un número: ";
    std::cin >> n;
    int soma = 0;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
        {
          soma = soma + i;

        }
        
        
    }
    std::cout << soma;
    return 0;
    



}