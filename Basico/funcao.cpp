#include <iostream>

// sem entrada, funcção que n retorna nenhum valor
void escrever(){
    std::cout << "Eu amo o corinthians!!!!!!!!!\n";
}

int somar(int x, int y){
    int soma;
    soma = x+y;
    return soma;

}

int main( ){

    escrever();

    int a=5, b=4;
    int s;
    s = somar(a,b);
    std::cout << "Soma: " << s << "\n";
    return 0;
}