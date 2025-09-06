// Leia um número n e imprima a tabuada dele de 1 até 10.

// pedir numero
// realizar for 
// enquanto for 1 <= 10 
// incremento
// n multipilca por n
#include <iostream>
int main(){

int num;
std::cout << "Digite o numero que voce quer a tabuada: ";
std::cin >> num;
int index=1 ;
for (index; index <= 10; index = index+1)
{
 std::cout << num << " X " << index << " = " << num*index <<  '\n';

}
 return 0;

}