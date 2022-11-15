// Dada a seguinte classe ponto:
// class ponto{ int x, y;
// public : ponto(int abs = 0, int ord = 0) { x = abs; y = ord;}
// };
// Escrever uma função independente visualizar, amiga da classe ponto, que permita visualizar 
// as coordenadas de um ponto. Separadamente se proporcionará um arquivo fonte que contenha a 
// nova declaração (definição) de ponto e um arquivo fonte que contenha a definição da função 
// visualizar. Escrever um programa que crie um ponto da classe automática e um ponto da classe 
// dinâmica e que visualize as coordenadas

#include <iostream>
#include "Ponto.h"

using namespace std;

int main(){
    Ponto a;
    Ponto b;

    a.setPonto(5, 8);

    visualizar(a);
    visualizar(b);

    return 0;

}