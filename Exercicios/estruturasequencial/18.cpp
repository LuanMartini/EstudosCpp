// Faça um programa em C++ que calcule o fatorial de um número inteiro não-negativo (iterativo).
// while → você precisa criar a variável antes, verificar a condição e incrementar manualmente.
// começar no n termina no 1 enquanto nao é igual a i n*n-1
int fatorial(int n) {
    int resultado = 1;   // começa em 1 (neutro da multiplicação)
    int cont = 1;        // contador começa em 1

    while (cont <= n) {
        resultado = resultado * cont;  
        cont++;                        
    }


    for (int cont = 1; cont <= n; cont++) {
        resultado = resultado * cont;
    }



    return resultado; 
}

