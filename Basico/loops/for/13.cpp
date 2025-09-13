// 13. **Tabuada de 1 a 10**  
//     Use dois laços for (um dentro do outro) para imprimir todas as tabuadas de 1 a 10.  


#include <iostream>

int main(){
    for (int i = 1; i <= 10; i++)
    {
       
        for (int j = 1; j <= 10; j++) 
        {
            int tabuada = i*j;
            std::cout << i << " X " << j << " = " << tabuada << '\n';
        }
        
    }
    return 0;
    



}