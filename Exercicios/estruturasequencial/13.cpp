// Faça um programa em C++ que leia dois inteiros e mostre o maior deles (ou informe se são iguais).


#include <iostream> 
int ehMaior(int n1, int n2){

if (n1>n2)
{
  std::cout << "O primeiro numero é maior\n";
} else if (n2>n1)
{
   std::cout << "O segundo numero é maior\n";
} else {
    std::cout << "Os numeros são iguais\n";
}

return 0;

}

int main(){
int a,b;
std::cout << "Digite o primeiro numero: ";
std::cin >> a;
std::cout << "Digite o segundo numero: ";
std::cin >> b;
int s;
s = ehMaior(a, b);
return s;

}