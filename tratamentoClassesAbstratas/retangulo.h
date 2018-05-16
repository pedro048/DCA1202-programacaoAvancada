#ifndef RETANGULO_H_INCLUDED
#define RETANGULO_H_INCLUDED

#include "figuraGeometrica.h"

class Retangulo: public FiguraGeometrica{
private:
    int l, h; //largura, altura
    int x, y; //coordenadas do vértice superior esquerdo
public:
    Retangulo(int x, int y, int l, int h);
    void draw(Screen &t);
    int getX();
    int getY();
    int getL(); //recupera valor da largura
    int getH(); //recupera valor da altura

};


#endif // RETANGULO_H_INCLUDED
