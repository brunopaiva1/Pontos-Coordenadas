// Dada a seguinte classe ponto:
// class ponto{ int x, y;
// public : ponto(int abs = 0, int ord = 0) { x = abs; y = ord;}
// };
// Escrever uma função independente visualizar, amiga da classe ponto, que permita visualizar 
// as coordenadas de um ponto. Separadamente se propor- cionará um arquivo fonte que contenha a 
// nova decla- ração (definição) de ponto e um arquivo fonte que contenha a definição da função 
// visualizar. Escrever um programa que crie um ponto da classe automática e um ponto da classe 
// dinâmica e que visualize as coordenadas

#ifndef PONTO_H
#define PONTO_H

class Ponto{
    private:
    int x, y;

    public:
    Ponto(int abs = 0, int ord = 0);
    friend void visualizar(Ponto a);
    void setPonto(int xx, int yy);

};

#endif //PONTO_H

