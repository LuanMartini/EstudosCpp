// Faça um programa em C++ que leia o salário de um funcionário e aplique um aumento percentual informado pelo usuário; exiba o salário reajustado.

#include <iostream>

float AumentaSalario(float salario, float aumento){
float aumentar;
if (salario < 0 || aumento < 0)
{
   std::cout << "Digite um número válido";
} else{

}

aumentar = salario + (salario * aumento / 100);
return aumentar;

}

int main(){
float salario;
float aumento;
std::cout <<  "Digite o seu salário: ";
std::cin >> salario;
std::cout << "Digite o seu aumento: ";
std::cin >> aumento;

float conta;
conta= AumentaSalario(salario,aumento);
std::cout << "Salario reajustado: " << conta << "\n";
return 0;


}