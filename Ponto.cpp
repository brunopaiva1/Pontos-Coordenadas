// Dada a seguinte classe ponto:
// class ponto{ int x, y;
// public : ponto(int abs = 0, int ord = 0) { x = abs; y = ord;}
// };
// Escrever uma função independente visualizar, amiga da classe ponto, que permita visualizar 
// as coordenadas de um ponto. Separadamente se propor- cionará um arquivo fonte que contenha a 
// nova decla- ração (definição) de ponto e um arquivo fonte que contenha a definição da função 
// visualizar. Escrever um programa que crie um ponto da classe automática e um ponto da classe 
// dinâmica e que visualize as coordenadas

#include <iostream>
#include "Ponto.h"

using namespace std;

Ponto::Ponto(int abs, int ord){
    x = abs;
    y = ord;
}

void Ponto::setPonto(int xx, int yy){
    x = xx;
    y = yy;
}