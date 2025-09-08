// 12. **Série decrescente**  
//     Leia um número n e imprima os números de n até 1.  

#include <iostream>

int main(){
    int n;
    std::cout <<"digite um n: ";
    std::cin >> n;
    for (n; n >= 1; n=n-1)
    {
        std::cout << n << '\n';

    }
    return 0;
    
}